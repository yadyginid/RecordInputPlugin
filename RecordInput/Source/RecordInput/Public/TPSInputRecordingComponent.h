// My game copyright

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputRecordingUtils.h"
#include "TPSInputRecordingComponent.generated.h"

class UPlayerInput;
struct FBindingsData;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RECORDINPUT_API UTPSInputRecordingComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UTPSInputRecordingComponent();

    UFUNCTION(BlueprintCallable)
    void StopRecord();

    
    UFUNCTION(BlueprintCallable)
    void StartRecord();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UPROPERTY(EditAnywhere)
    FString FileName{"CharacterTestInput"};


    int32 BeginTestTime;
    float ElapsedTime;
    float LagTime;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    bool IsRun = false;

    UFUNCTION(BlueprintCallable)
    void TestForwardMove() { IsRun = true; };

    bool MoveTest(float DeltaTime);

    void SetBindingsDataForRun(TArray<FBindingsData>& BindingsDataForRunIn) { BindingsDataForRun = BindingsDataForRunIn; }

private:
    UPROPERTY()
    UPlayerInput* PlayerInput;

    FInputData InputData;

    FBindingsData MakeBindingsData(float Delta);
    FString GenerateFileName() const;

    int32 Index{0};
    float WorldStartTime{0};
    float WorldSaveStartTime{0};

    bool IsWorldStartTime = false;


    UPROPERTY()
    TArray<FBindingsData> BindingsDataForRun;
};
