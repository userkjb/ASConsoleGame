#pragma once
class ConsoleScreen
{
public :
	ConsoleScreen(char _Basechar);
	void Render(const char* _BaseChar);
	//void ClearScreen();

	void CreateMap(int _X, int _Y);
	void DeleteMap();

private:
	char BaseCh = ' ';
	char** Map = nullptr;
	bool b_CreateMap = false;
	int X = 0;
};

