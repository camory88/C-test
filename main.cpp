#include <iostream>
#include "math.h"
std::string name;

int main()
{
    printf("What is your name?");
    std::getline(std::cin,name);
    
    
    while (true)
    {
        system("clear");
        printf(std::string(" \nHello "+ name + " nice to meant you!\n").c_str());
        math();
    }
    system("pause");
    return 0;
}
