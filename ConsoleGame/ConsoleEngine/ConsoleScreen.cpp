#include "ConsoleScreen.h"
#include <iostream>

void ConsoleScreen::Render(const char* _Char)
{
	int Size = static_cast<int>(strlen(_Char));

	for (int i = 0; i < Size; i++)
	{
		printf_s("%c", _Char[i]);
	}
}
