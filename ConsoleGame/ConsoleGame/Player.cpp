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
		AddPos(Up);
		break;
	case 'A':
	case 'a':
		AddPos(Left);
		break;
	case 'S':
	case 's':
		AddPos(Down);
		break;
	case 'D':
	case 'd':
		AddPos(Right);
		break;
	case 'Q':
	case 'q':
		IsFire = true;
		break;
	default :
		break;
	}
}
