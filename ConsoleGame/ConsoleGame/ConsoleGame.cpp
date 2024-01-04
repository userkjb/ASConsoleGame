#include <iostream>
#include <ConsoleEngine/ConsoleScreen.h>

int main()
{
    ConsoleScreen screen = ConsoleScreen('*');
    screen.CreateMap(10, 10);
    //screen.StartRender();

    screen.Render("xxxx");
}
