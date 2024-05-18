#include "RelicWidget.h"
#include "Components/Image.h"

void URelicWidget::SetUp(UTexture2D* icon, FString description)
{
	Image->SetBrushFromTexture(icon);
	Image->SetToolTipText(FText::FromString(description));
}
