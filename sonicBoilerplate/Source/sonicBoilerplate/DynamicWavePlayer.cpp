// Fill out your copyright notice in the Description page of Project Settings.


#include "DynamicWavePlayer.h"

// Sets default values
ADynamicWavePlayer::ADynamicWavePlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Initialize volume to 1.0 by default
	Volume = 1.0f;

}

// Called when the game starts or when spawned
void ADynamicWavePlayer::BeginPlay()
{
	Super::BeginPlay();

    // Iterate through the array of audio wave assets and create audio components for each
    for (USoundWave* AudioWave : AudioWaveAssets)
    {
        if (AudioWave)
        {
            UAudioComponent* AudioComponent = UGameplayStatics::SpawnSoundAttached(AudioWave, RootComponent);
            if (AudioComponent)
            {
                // Set the volume for each audio component
                AudioComponent->SetVolumeMultiplier(Volume);
            }
        }
    }
	
}

// Called every frame
void ADynamicWavePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

