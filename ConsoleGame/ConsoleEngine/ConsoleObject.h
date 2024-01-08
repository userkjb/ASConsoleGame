#pragma once
#include "ConsoleMath.h"

class ConsoleObject
{
public :
	ConsoleObject();
	~ConsoleObject();
	
	inline int2 GetPos() const
	{
		return Pos;
	}
	inline void SetPos(const int2& _Pos)
	{
		Pos = _Pos;
	}
	
	inline char GetRanderChar() const
	{
		return RanderChar;
	}

private :
	int2 Pos = { 0, 0 };
	char RanderChar = '@';
};

