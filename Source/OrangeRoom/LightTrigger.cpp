// Copyright 2018 Matt Rimler Leve by UA Asset Store

#include "LightTrigger.h"


// Sets default values for this component's properties
ULightTrigger::ULightTrigger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULightTrigger::BeginPlay()
{
	Super::BeginPlay();

	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
}

void ULigthTrigger::LightTrigger()
{


	// Find owning Actor
	AActor* Owner = GetOwner();

	//Create rotator
	FIntensity NewRotation = FIntensity(0.0f, -90.0f, 0.0f);

	//Set rotation
	Owner->SetActorRotation(NewRotation);
}
	
}


// Called every frame
void ULightTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

