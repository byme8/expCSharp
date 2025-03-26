#include "OnlineSystemWrapper.h"
#include "CoreMinimal.h"
#include "OnlineSessionSettings.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemUtils.h"

UOnlineSystemWrapper::UOnlineSystemWrapper()
{
}

APlayerControllerWrapper::APlayerControllerWrapper()
{
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[CTOR] CanEverTick %s"), PrimaryActorTick.bCanEverTick ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[CTOR] TickGroup %d"), static_cast<int32>(PrimaryActorTick.TickGroup));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[CTOR] EndTickGroup %d"), static_cast<int32>(PrimaryActorTick.EndTickGroup));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[CTOR] TickEvenWhenPaused %s"), PrimaryActorTick.bTickEvenWhenPaused ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[CTOR] StartWithTickEnabled %s"), PrimaryActorTick.bStartWithTickEnabled ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[CTOR] AllowTickOnDedicatedServer %s"), PrimaryActorTick.bAllowTickOnDedicatedServer ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[CTOR] TickInterval %f"), PrimaryActorTick.TickInterval);
}

void APlayerControllerWrapper::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[OnConstruction] CanEverTick %s"), PrimaryActorTick.bCanEverTick ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[OnConstruction] TickGroup %d"), static_cast<int32>(PrimaryActorTick.TickGroup));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[OnConstruction] EndTickGroup %d"), static_cast<int32>(PrimaryActorTick.EndTickGroup));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[OnConstruction] TickEvenWhenPaused %s"), PrimaryActorTick.bTickEvenWhenPaused ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[OnConstruction] StartWithTickEnabled %s"), PrimaryActorTick.bStartWithTickEnabled ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[OnConstruction] AllowTickOnDedicatedServer %s"), PrimaryActorTick.bAllowTickOnDedicatedServer ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[OnConstruction] TickInterval %f"), PrimaryActorTick.TickInterval);
}

void APlayerControllerWrapper::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[BeginPlay] CanEverTick %s"), PrimaryActorTick.bCanEverTick ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[BeginPlay] TickGroup %d"), static_cast<int32>(PrimaryActorTick.TickGroup));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[BeginPlay] EndTickGroup %d"), static_cast<int32>(PrimaryActorTick.EndTickGroup));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[BeginPlay] TickEvenWhenPaused %s"), PrimaryActorTick.bTickEvenWhenPaused ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[BeginPlay] StartWithTickEnabled %s"), PrimaryActorTick.bStartWithTickEnabled ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[BeginPlay] AllowTickOnDedicatedServer %s"), PrimaryActorTick.bAllowTickOnDedicatedServer ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Log, TEXT("Hello from C++:[BeginPlay] TickInterval %f"), PrimaryActorTick.TickInterval);
}
	