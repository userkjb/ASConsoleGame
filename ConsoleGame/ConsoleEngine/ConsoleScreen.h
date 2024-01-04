#pragma once
class ConsoleScreen
{
public :
	ConsoleScreen(char _Basechar);
	void Render(const char* _BaseChar);

private:
	char BaseCh = ' ';
};

