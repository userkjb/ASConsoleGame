#pragma once
#include "EngineDebug.h"
#include "ConsoleMath.h"

class ConsoleScreen
{
public :
	ConsoleScreen(char _Basechar);

	void CreateScreen(int _ScreenX, int _ScreenY);
	void ReleaseScreen();
	void PrintScreen();
	void ClearScreen();


	void SetChar(const class ConsoleObject& _Object);
	void SetChar(const int2& _Pos, char _Char);

private:
	char BaseCh = ' ';
	char** Map = nullptr;
	bool b_CreateMap = false;
	int X = 0;
};

