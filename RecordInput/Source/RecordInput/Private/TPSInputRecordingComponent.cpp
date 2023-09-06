// My game copyright

#include "TPSInputRecordingComponent.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"
#include "JsonUtils.h"
#include "GameFramework/PlayerInput.h"
#include "Kismet/GameplayStatics.h"

using namespace TPS::Test;

UTPSInputRecordingComponent::UTPSInputRecordingComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UTPSInputRecordingComponent::StopRecord()
{
    JsonUtils::WriteInputData(GenerateFileName(), InputData);
}

void UTPSInputRecordingComponent::StartRecord()
{
    InputData.InitialTransform = GetOwner()->GetActorTransform();
    InputData.Bindings.Add(MakeBindingsData(0));
}

void UTPSInputRecordingComponent::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("UTPSInputRecordingComponent::BeginPlay"));

    check(GetOwner());
    check(GetWorld());
    check(GetOwner()->InputComponent);

    const auto* Pawn = Cast<APawn>(GetOwner());
    check(Pawn);

    const auto* PlayerController = Pawn->GetController<APlayerController>();
    check(PlayerController);

    PlayerInput = PlayerController->PlayerInput;
    check(PlayerInput);
}

void UTPSInputRecordingComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
}

void UTPSInputRecordingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    InputData.Bindings.Add(MakeBindingsData(DeltaTime));

    if (IsRun)
    {
        MoveTest(DeltaTime);
    }
}

FBindingsData UTPSInputRecordingComponent::MakeBindingsData(float DeltaTime)
{
    FBindingsData BindingsData;
  
    if (!GetOwner()->InputComponent)
    {
        return BindingsData; 
    }

    if (WorldSaveStartTime == 0)
    {
         //WorldSaveStartTime = FDateTime::UtcNow().ToUnixTimestamp();// World->TimeSeconds
         WorldSaveStartTime = GetWorld()->TimeSeconds;
         UE_LOG(LogTemp, Warning, TEXT("WorldStartTime2 = 0 %d"), WorldSaveStartTime);
    }

    for (const auto &AxisBinding : GetOwner()->InputComponent->AxisBindings)
    {
        BindingsData.AxisValues.Add(FAxisData{AxisBinding.AxisName, AxisBinding.AxisValue});
    }

    for (int32 i = 0; i < GetOwner()->InputComponent->GetNumActionBindings(); ++i)
    {
        const auto Action = GetOwner()->InputComponent->GetActionBinding(i);
        const auto ActionKeys = PlayerInput->GetKeysForAction(Action.GetActionName());
        if (ActionKeys.Num() > 0)
        {
            const bool Pressed = PlayerInput->IsPressed(ActionKeys[0].Key);
            const bool State = (Pressed && Action.KeyEvent == EInputEvent::IE_Pressed) ||  //
                               (!Pressed && Action.KeyEvent == EInputEvent::IE_Released);
            BindingsData.ActionValues.Add(FActionData{Action.GetActionName(), ActionKeys[0].Key, State});
        }
    }
   
    BindingsData.Transform = GetOwner()->GetActorTransform();
    BindingsData.WorldTime = GetWorld()->TimeSeconds;

    return BindingsData;
}

FString UTPSInputRecordingComponent::GenerateFileName() const
{
    FString SavedDir = FPaths::ProjectSavedDir();
    const FString Date = FDateTime::Now().ToString();
    FString SavePath = FPaths::ProjectSavedDir() + TEXT("MyData.json");

    return SavePath;
}

bool UTPSInputRecordingComponent::MoveTest(float DeltaTime)
{
    //IsRun = true;
    auto World = GetWorld();
    auto InputComponent = GetOwner()->InputComponent;

    if (!World || !InputComponent)
    {
        return false;
    }

    if (WorldStartTime == 0)
    {
        WorldStartTime = GetWorld()->TimeSeconds;
        //WorldStartTime = FDateTime::UtcNow().ToUnixTimestamp();  // World->TimeSeconds
    }

    if (Index >= BindingsDataForRun.Num())
    {
        return false;
    }

    IsRun = false;

      while (GetWorld()->GetTimeSeconds() - WorldStartTime >= BindingsDataForRun[Index].WorldTime)
      {
          GetOwner()->SetActorTransform(BindingsDataForRun[Index].Transform);
          if (++Index >= BindingsDataForRun.Num())
          {
              return false;
          }
      }


    /* TODO with lag not correct play record actions
    while (GetWorld()->GetTimeSeconds() - WorldStartTime >= BindingsDataForRun[Index].WorldTime + LagTime)
    {
        //InputComponent->AxisBindings[0].AxisDelegate.Execute(1);
        int32 testValue = ((FDateTime::UtcNow() - UnixEpochStart).GetTotalMilliseconds());
        int32 testValueWithWorldStartTime = ((FDateTime::UtcNow() - UnixEpochStart).GetTotalMilliseconds()) - WorldStartTime;
        int32 testIndexValue = BindingsDataForRun[Index].WorldTime;

        UE_LOG(LogTemp, Warning, TEXT("UTPSInputRecordingComponent::MoveTest RUN while "));
        //UE_LOG(LogTemp, Warning, TEXT("FDateTime::UtcNow().ToUnixTimestamp() - WorldStartTime while %d"), FDateTime::UtcNow().ToUnixTimestamp() - WorldStartTime);

        UE_LOG(LogTemp, Warning, TEXT("testValue %d"), testValue);
        UE_LOG(LogTemp, Warning, TEXT("testValueWithWorldStartTime %d"),testValueWithWorldStartTime);
        UE_LOG(LogTemp, Warning, TEXT("testIndexValue %d"), testIndexValue);

        if (Index >= BindingsDataForRun.Num())
        {
            return false;
        } 

        for (int32 i = 0; i < InputComponent->AxisBindings.Num(); ++i)
        {
            const float AxisValue = BindingsDataForRun[Index].AxisValues[i].Value;
            InputComponent->AxisBindings[i].AxisDelegate.Execute(AxisValue);
        }

        if (Index > 0)
        {
            for (int32 i = 0; i < InputComponent->GetNumActionBindings(); ++i)
            {
                const auto ActionValue = BindingsDataForRun[Index].ActionValues[i];
                const auto PrevActionValue = BindingsDataForRun[Index - 1].ActionValues[i];
                if (ActionValue.State && ActionValue.State != PrevActionValue.State)
                {
                    InputComponent->GetActionBinding(i).ActionDelegate.Execute(ActionValue.Key);
                }
            }
        }

        if (++Index >= BindingsDataForRun.Num())
        {
            return false;
        }
    }
    */
     IsRun = true;
     return true;
}