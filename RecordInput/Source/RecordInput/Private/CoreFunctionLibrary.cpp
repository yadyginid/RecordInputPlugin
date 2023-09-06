// My game copyright


#include "CoreFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "TPSInputRecordingComponent.h"
#include "InputRecordingUtils.h"
#include "JsonUtils.h"

void UCoreFunctionLibrary::TestInputRun(ACharacter* Character)
{
    FInputData InputData;
    FString FileName = FPaths::ProjectSavedDir() + TEXT("MyData.json");

    if (!TPS::Test::JsonUtils::ReadInputData(FileName, InputData))
    {
        UE_LOG(LogTemp, Warning, TEXT("json file not found"));
        return;
    }

    if (!Character)
    {
        UE_LOG(LogTemp, Warning, TEXT("json Character not found"));
        return;
    }

    auto PlayerController1 = Cast<APlayerController>(Character->GetController());
    if (!PlayerController1)
    {
        UE_LOG(LogTemp, Warning, TEXT("json PlayerController not found"));
        return;
    }

    auto TPSInputRecordingComponent = Character->GetComponentByClass<UTPSInputRecordingComponent>();
    if (TPSInputRecordingComponent)
    {
        Character->SetActorTransform(InputData.InitialTransform);
        PlayerController1->SetControlRotation(InputData.InitialTransform.Rotator());

        TPSInputRecordingComponent->SetBindingsDataForRun(InputData.Bindings);
        TPSInputRecordingComponent->IsRun = true;
    }

}