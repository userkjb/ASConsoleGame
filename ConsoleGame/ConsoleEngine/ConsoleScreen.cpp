#include "ConsoleScreen.h"
#include <iostream>


void ConsoleScreen::CreateScreen(int _ScreenX, int _ScreenY)
{
	if (0 >= _ScreenX)
	{
		MsgBoxAssert("��ũ�� Xũ�Ⱑ 0�̱� ������ ����");
	}
	if (0 >= _ScreenY)
	{
		MsgBoxAssert("��ũ�� Yũ�Ⱑ 0�̱� ������ ����");
	}

	ScreenX = _ScreenX;
	ScreenY = _ScreenY;

	if (ScreenData != nullptr)
	{
		MsgBoxAssert("��ũ���� ������� �ֽ��ϴ�.");
	}

	ScreenData = new char* [_ScreenY];
	if (ScreenData == nullptr)
	{
		MsgBoxAssert("��ũ�� ������ �����Ͽ����ϴ�.");
	}

	for (int y = 0; y < _ScreenY; y++)
	{
		ScreenData[y] = new char[_ScreenX + 2] {0, };

		if (ScreenData[y] == nullptr)
		{
			MsgBoxAssert("��ũ�� ������ �����߽��ϴ�.");
		}
	}
}

void ConsoleScreen::ClearScreen()
{

}
