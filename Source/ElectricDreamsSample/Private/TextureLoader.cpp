//The plane for this class was to have it stop the player from moving when "prepairing textures", however i have had difficulty getting this to work
/*
#include "TextureLoader.h"
#include "TimerManager.h"
#include "Engine/TextureStreamingTypes.h"
#include "Engine/StreamableManager.h"



ATextureLoader::ATextureLoader()
{
    TotalTextures = 0;
    TexturesLoaded = 0;
}

void ATextureLoader::BeginPlay()
{

    Super::BeginPlay();

    if (LoadingWidgetClass)
    {
        LoadingWidget = CreateWidget<UTextureLoadingWidget>(GetWorld(), LoadingWidgetClass);
        if (LoadingWidget)
        {
            LoadingWidget->AddToViewport();
        }
        
    }

    TArray<FSoftObjectPath> AssetPaths;
    for (const auto& TexturePtr : TexturesToLoad)
    {
        AssetPaths.Add(TexturePtr.ToSoftObjectPath());
    }

    TotalTextures = AssetPaths.Num();
    TexturesLoaded = 0;

    StreamingHandle = StreamableManager.RequestAsyncLoad(
        AssetPaths,
        FStreamableDelegate::CreateUObject(this, &ATextureLoader::OnTexturesLoaded),
        FStreamableManager::AsyncLoadHighPriority);

    // Start a timer to update loading progress
    GetWorld()->GetTimerManager().SetTimer(
        LoadingProgressTimerHandle,
        this,
        &ATextureLoader::UpdateLoadingProgress,
        0.1f,
        true
    );

    UE_LOG(LogTemp, Warning, TEXT("Pending Textures: %d"), TotalTextures);

    GetWorld()->GetTimerManager().SetTimer(LoadingProgressTimerHandle, this, &ATextureLoader::UpdateLoadingProgress, 0.1f, true);

}

void ATextureLoader::UpdateLoadingProgress()
{
   if (StreamingHandle.IsValid())
    {
        float Progress = StreamingHandle->GetProgress();
        int32 NumTexturesPendingStreaming = FMath::RoundToInt(TotalTextures * (1.0f - Progress));

        UE_LOG(LogTemp, Log, TEXT("Textures Pending Streaming: %d"), NumTexturesPendingStreaming);

        if (LoadingWidget)
        {
            LoadingWidget->UpdateProgress(NumTexturesPendingStreaming, TotalTextures);
        }

        if (Progress >= 1.0f)
        {
            OnLoadingComplete();
        }
    }
    else
    {
        OnLoadingComplete();
    }

}

void ATextureLoader::OnLoadingComplete()
{
    GetWorld()->GetTimerManager().ClearTimer(LoadingProgressTimerHandle);

    if (LoadingWidget)
    {
        LoadingWidget->RemoveFromParent();
    }
}
    */