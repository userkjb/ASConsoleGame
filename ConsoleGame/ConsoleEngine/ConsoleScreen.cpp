#include "ConsoleScreen.h"
#include <iostream>


void ConsoleScreen::CreateScreen(int _ScreenX, int _ScreenY)
{
	if (0 >= _ScreenX)
	{
		MsgBoxAssert("스크린 X크기가 0이기 때문에 에러");
	}
	if (0 >= _ScreenY)
	{
		MsgBoxAssert("스크린 Y크기가 0이기 때문에 에러");
	}

	ScreenX = _ScreenX;
	ScreenY = _ScreenY;

	if (ScreenData != nullptr)
	{
		MsgBoxAssert("스크린이 만들어져 있습니다.");
	}

	ScreenData = new char* [_ScreenY];
	if (ScreenData == nullptr)
	{
		MsgBoxAssert("스크린 생성에 실패하였습니다.");
	}

	for (int y = 0; y < _ScreenY; y++)
	{
		ScreenData[y] = new char[_ScreenX + 2] {0, };

		if (ScreenData[y] == nullptr)
		{
			MsgBoxAssert("스크린 생성에 실패했습니다.");
		}
	}
}

void ConsoleScreen::ClearScreen()
{

}
