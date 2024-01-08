#include <iostream>
#include <ConsoleEngine/ConsoleScreen.h>
#include <ConsoleEngine/EngineDebug.h>

#include "Player.h"

int main()
{
	LeckCheck;

	ConsoleScreen Screen = ConsoleScreen();
	Screen.CreateScreen(20, 20);

	Player NewPlayer;
	NewPlayer.SetPos({ Screen.GetScreenX / 2, Screen.GetScreenY - 2 });
}
