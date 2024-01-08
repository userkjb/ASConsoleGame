#include <iostream>
#include <ConsoleEngine/ConsoleScreen.h>
#include <ConsoleEngine/EngineDebug.h>

#include "Player.h"
#include "Bullet.h"

int main()
{
	LeckCheck;

	ConsoleScreen Screen = ConsoleScreen();
	Screen.CreateScreen(20, 20);

	Player NewPlayer;
	NewPlayer.SetPos({ Screen.GetScreenX() / 2, Screen.GetScreenY() - 2});

	const int BulletCount = Screen.GetScreenY() * 2;
	Bullet* NewBullet = new Bullet[BulletCount];
	int CurBullet = 0;

	while (true)
	{
		Sleep(100);

		NewPlayer.InputKey();

		if (NewPlayer.GetIsFire() == true)
		{
			NewBullet[CurBullet].SetPos(NewPlayer.GetPos());
			NewBullet[CurBullet].Fire();
			CurBullet++;

			if (BulletCount <= CurBullet)
			{
				CurBullet = 0;
			}
		}

		Screen.SetChar(NewPlayer);
		Screen.PrintScreen();
	}
}
