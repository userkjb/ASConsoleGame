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
