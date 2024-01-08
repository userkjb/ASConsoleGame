#include "ConsoleScreen.h"
#include <iostream>

ConsoleScreen::ConsoleScreen(char _BaseChar)
{
	BaseCh = _BaseChar;
}

void ConsoleScreen::ClearScreen()
{
	system("cls");
	// ....
}

void ConsoleScreen::CreateScreen(int _ScreenX, int _ScreenY)
{
	X = _ScreenX;
	Map = new char* [_ScreenX];
	for (int i = 0; i < _ScreenY; i++)
	{
		Map[i] = new char[_ScreenY];
	}

	// Re Set
	for (int x = 0; x < _ScreenX; x++)
	{
		for (int y = 0; y < _ScreenY; y++)
		{
			Map[x][y] = BaseCh;
		}
	}

	b_CreateMap = true;
}

