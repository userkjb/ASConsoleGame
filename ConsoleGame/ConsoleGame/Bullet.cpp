#include "Bullet.h"

Bullet::Bullet()
{
	SetRenderChar('|');
}

void Bullet::BulletMove()
{
	if (IsFire == false)
	{
		return;
	}

	AddPos(Up);
}
