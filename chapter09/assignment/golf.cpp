#include <iostream>
#include <string>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    char tempName[40];
    int tempInt;
    std::cout << "Enter golf player's name: ";
    std::cin.getline(tempName, 40);
    std::cout << "Enter golf player's handicap: ";
    std::cin >> tempInt;

    if (*tempName != '\0')
    {
        setgolf(g, tempName, tempInt);
        return 1;
    }
    else
    {

        return 0;
    }

}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}


void showgolf(const golf & g)
{
    std::cout << g.fullname << ", " << g.handicap << std::endl;
}
