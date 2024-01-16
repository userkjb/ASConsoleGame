#include "ConsoleCore.h"
#include "EngineDebug.h"

void ConsoleCore::Init(int2 _ScreenSize)
{
	LeckCheck;

	Screen.CreateScreen(_ScreenSize.X, _ScreenSize.Y);
}

void ConsoleCore::Start()
{
}

void ConsoleCore::EngineEnd()
{
	EngineUpdate = false;
}
