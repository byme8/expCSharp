#pragma once
#include "CoreMinimal.h"
#include "OnlineSubsystem.h"
#include "OnlineSystemWrapper.generated.h"

UCLASS(BlueprintType)
class EXPCSHARP_API UOnlineSystemWrapper : public UObject
{
	GENERATED_BODY()
public:
	UOnlineSystemWrapper();
};


UCLASS()	
class EXPCSHARP_API APlayerControllerWrapper : public APlayerController
{
	GENERATED_BODY()
public:
	APlayerControllerWrapper();

	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void BeginPlay() override;
};
