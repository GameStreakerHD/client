#include "ImportPresetEvent.h"

#include "Global.h"

ImportPresetEvent::ImportPresetEvent()
    : QEvent(static_cast<QEvent::Type>(Enum::EventType::ImportPreset))
{
}