// My game copyright

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputRecordingUtils.h"
#include "CoreFunctionLibrary.generated.h"

/**
 * 
 */

class ACharacter;


UCLASS(Blueprintable, BlueprintType)
class RECORDINPUT_API UCoreFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Test")
    static void TestInputRun(ACharacter* Character);

    UFUNCTION(BlueprintCallable, Category = "Testing")
    static void RunMyAutomationTest(FString TestName, int32 RoleIndex)
    {
        FAutomationTestFramework::Get().StartTestByName(TestName, RoleIndex);
    }
};