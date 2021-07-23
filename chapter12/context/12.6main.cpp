#include "12.1string1.h"
#include <iostream>


const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    String name;
    std::cout << "Hi, What's your name?" << std::endl;
    std::cin >> name;

    std::cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>." << std::endl;

    String sayings[ArSize];
    char temp[MaxLen];

    int i;

    for(i = 0; i < ArSize; i++)
    {
        std::cout << i + 1 << ": ";
        std::cin.get(temp, MaxLen);
        while(std::cin && std::cin.get() != '\n')
            continue;

        if(!std::cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }

    int total = i;
    if(total > 0)
    {
        std::cout << "Here are your sayings:" << std::endl;
        for(i = 0; i < total; i++)
            std::cout << sayings[i][0] << ": " << sayings[i] << std::endl;

        int shortest = 0;
        int first = 0;

        for(i = 0; i < total; i++)
        {
            if(sayings[i].length() < sayings[shortest].length())
                shortest = i;

            if(sayings[i] < sayings[first])
                first = i;
        }

        std::cout << "Shortest saying: \n" << sayings[shortest] << std::endl;
        std::cout << "First alphabetically: \n" << sayings[first] << std::endl;
        std::cout << "This progam used " << String::HowMany() << " String objects, Bye\n";

    }
    else
    {
        std::cout << "No input! Bye.\n";
    }

    return 0;
}