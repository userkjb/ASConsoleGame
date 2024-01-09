#include <iostream>
#include <ConsoleEngine/ConsoleScreen.h>
#include <ConsoleEngine/EngineDebug.h>

#include "Player.h"
#include "Bullet.h"
#include "Monster.h"

int main()
{
	LeckCheck;

	ConsoleScreen Screen = ConsoleScreen();
	Screen.CreateScreen(20, 20);

	Player NewPlayer;
	NewPlayer.SetPos({ Screen.GetScreenX() / 2, Screen.GetScreenY() - 2});

	const int MonsterCount = Screen.GetScreenX() / 2;
	//Monster ArrMonster0[100];
	//Monster ArrMonster1[10];
	ConsoleObject** ArrMonster = new ConsoleObject * [MonsterCount];
	for (int i = 0; i < MonsterCount; i++)
	{
		ArrMonster[i] = new Monster();
		ArrMonster[i]->SetPos({ i, 0 });
		ArrMonster[i]->SetRenderChar('&');
	}

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

		for (int i = 0; i < BulletCount; i++)
		{
			if (NewBullet[i].GetIsFire() == false)
			{
				continue;
			}

			NewBullet[i].BulletMove();
			Screen.SetChar(NewBullet[i]);
		}

		Screen.SetChar(NewPlayer);
		Screen.PrintScreen();		
	}

	if (NewBullet)
	{
		delete[] NewBullet;
		NewBullet = nullptr;
	}
}
