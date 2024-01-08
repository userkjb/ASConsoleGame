#pragma once
#include "EngineDebug.h"
#include "ConsoleMath.h"

class ConsoleScreen
{
public :
	void CreateScreen(int _ScreenX, int _ScreenY);
	void ReleaseScreen();
	void PrintScreen();
	void ClearScreen();

	void SetChar(const class ConsoleObject* _Object);
	void SetChar(const class ConsoleObject& _Object);
	void SetChar(const int2& _Pos, char _Char);

private:
	char** ScreenData = nullptr;
	int ScreenX = -1;
	int ScreenY = -1;
};

