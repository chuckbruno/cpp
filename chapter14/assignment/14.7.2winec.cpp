#include "14.7.2winec.h"
#include <iostream>

Wine::Wine(const char * l, int y, const int yr[], const int bot[]): std::string(l)
{
    years = y;
    PairArray::operator=(PairArray(ArrayInt(yr, y), ArrayInt(bot, y)));
}


Wine::Wine(const char * l, int y): std::string(l)
{
    years = y;
    PairArray::operator=(PairArray(ArrayInt(y), ArrayInt(y)));
}


void Wine::GetBottles()
{
    std::cout << "Enter " << (std::string &)*this << " data for " << years << " year(s):" << std::endl;
    int index = 0;
    int _yearArr[years];
    int _bottlesArr[years];

    while(index < years)
    {
        std::cout << "Enter year: ";
        int _tempYr;
        std::cin >> _tempYr;
        _yearArr[index] = _tempYr;

        std::cout << "Enter bottles for that year: ";
        int _tempBt;
        std::cin >> _tempBt;
        _bottlesArr[index] = _tempBt;
        index++;
    }

    ArrayInt _years(_yearArr, years);
    ArrayInt _bottles(_bottlesArr, years);

    // PairArray(_years, _bottles);
    PairArray::operator=(PairArray(_years, _bottles));


}


void Wine::Show()
{
    std::cout << "Wine:  " << (std::string &)*this << std::endl;
    std::cout.width(10);
    std::cout << "Year";
    std::cout.width(10);
    std::cout << "Bottles" << std::endl;
    for(int i = 0; i < years; i++)
    {
        std::cout.width(10);
        std::cout << PairArray::first()[i];
        std::cout.width(10);
        std::cout << PairArray::second()[i]<< std::endl;
    }
}

std::string & Wine::Label()
{
    return (std::string &)*this;
}


int Wine::sum()
{
    int sum = 0;
    for(int i = 0; i < years; i++)
    {
        sum += PairArray::second()[i];
    }

    return sum;
}
