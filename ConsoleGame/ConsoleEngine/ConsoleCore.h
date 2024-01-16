#pragma once

#include <map>
#include <list>

#include "ConsoleScreen.h"
#include "ConsoleObject.h"

class ConsoleCore
{
	friend class ConsoleObject;

public :
	ConsoleScreen Screen = ConsoleScreen();

	void Init(int2 _ScreenSize);
	void Start();
	void EngineEnd();

private :
	std::map<int, std::list<ConsoleObject*>> AllUpdateObject;
	std::map<int, std::list<ConsoleObject*>> AllRenderObject;
	bool EngineUpdate = true;
};

