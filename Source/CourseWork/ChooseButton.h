#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChooseButton.generated.h"

class UButton;
class UTextBlock;
class UImage;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChooseButtonClicked, UChooseButton*, button);

UCLASS()
class COURSEWORK_API UChooseButton : public UUserWidget
{
	GENERATED_BODY()

	void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UButton* Button;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text;
	UPROPERTY(meta = (BindWidget))
	UImage* Image;

	UFUNCTION()
	void ButtonClicked();

public:

	UPROPERTY()
	FOnChooseButtonClicked OnChooseButtonClickEvent;

	UFUNCTION()
	void SetUp(UTexture2D* icon, FString title);
};
