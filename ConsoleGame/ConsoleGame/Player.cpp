#include "Player.h"
#include <conio.h>

void Player::InputKey()
{
	IsFire = false;

	int Select = _getch();

	switch (Select)
	{
	case 'W':
	case 'w':
		break;
	case 'A':
	case 'a':
		break;
	case 'S':
	case 's':
		break;
	case 'D':
	case 'd':
		break;
	default :
		break;
	}
}
