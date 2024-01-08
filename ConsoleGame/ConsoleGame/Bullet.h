#pragma once
#include <ConsoleEngine/ConsoleObject.h>

class Bullet : public ConsoleObject
{
public :
	Bullet();
	void BulletMove();

	inline void Fire()
	{
		IsFire = true;
	}

	inline bool GetIsFire()
	{
		return IsFire;
	}

private :
	bool IsFire = false;
};

