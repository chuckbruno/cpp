#include "10.10.3assign.h"
#include <iostream>
#include <cstring>


Golf::Golf()
{
    fullname[0] = '\0';
    handicap = 0;
}


Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

void Golf::Setgolf()
{
    char tempName[40];
    int tempInt;
    std::cout << "Enter golf player's name: ";
    std::cin.getline(tempName, 40);
    std::cout << "Enter golf player's handicap: ";
    std::cin >> tempInt;

    if (*tempName != '\0')
    {
        Golf temp(tempName, tempInt);
        *this = temp;
    }
    else
    {
        Golf temp1;
        *this = temp1;
    }
}


void Golf::Handicap(int hc)
{
    handicap = hc;
}


void Golf::Showgolf()
{
    std::cout << fullname << ", " << handicap << std::endl;

}
