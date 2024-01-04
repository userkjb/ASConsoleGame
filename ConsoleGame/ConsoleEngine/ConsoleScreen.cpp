#include "ConsoleScreen.h"
#include <iostream>

ConsoleScreen::ConsoleScreen(char _BaseChar)
{
	BaseCh = _BaseChar;
}

void ConsoleScreen::Render(const char* _BaseChar)
{
	int Size = static_cast<int>(strlen(_BaseChar));

	for (int i = 0; i < Size; i++)
	{
		printf_s("%c", _BaseChar[i]);
	}
}

void ConsoleScreen::CreateMap(int _X, int _Y)
{
	X = _X;
	Map = new char* [_X];
	for (int i = 0; i < _Y; i++)
	{
		Map[i] = new char[_Y];
	}

	// Re Set
	for (int x = 0; x < _X; x++)
	{
		for (int y = 0; y < _Y; y++)
		{
			Map[x][y] = BaseCh;
		}
	}

	b_CreateMap = true;
}

void ConsoleScreen::DeleteMap()
{
	if (b_CreateMap == false)
	{
		return;
	}
	if (X == 0)
	{
		return;
	}
	
	for (int i = 0; i < X; i++)
	{
		delete[] Map[i];
	}
	delete[] Map;
}
