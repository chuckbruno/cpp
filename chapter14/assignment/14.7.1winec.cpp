#include "14.7.1winec.h"
#include <iostream>


Wine::Wine()
{
    label = "";
    ArrayInt _yrs;
    ArrayInt _bot;
    yearBottles = PairArray(_yrs, _bot);
    years = 0;
}


Wine::Wine(const char * l, int y, const int yr[], const int bot[])
{
    label = std::string(l, l + strlen(l));
    years = y;
    ArrayInt _yrs(yr, y);
    ArrayInt _bot(bot, y);
    yearBottles = PairArray(_yrs, _bot);
}


Wine::Wine(const char * l, int y)
{
    label = std::string(l, l + strlen(l));
    years = y;
    ArrayInt _yrs;
    ArrayInt _bot;
    yearBottles = PairArray(_yrs, _bot);
}

void Wine::GetBottles()
{
    std::cout << "Enter " << label << " data for " << years << " year(s):" << std::endl;
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

    yearBottles = PairArray(_years, _bottles);

}


void Wine::Show()
{
    std::cout << "Wine:  " << label << std::endl;
    std::cout.width(10);
    std::cout << "Year";
    std::cout.width(10);
    std::cout << "Bottles" << std::endl;
    for(int i = 0; i < years; i++)
    {
        std::cout.width(10);
        std::cout << yearBottles.first()[i];
        std::cout.width(10);
        std::cout << yearBottles.second()[i]<< std::endl;
    }
}

std::string & Wine::Label()
{
    return label;
}


int Wine::sum()
{
    int sum = 0;
    for(int i = 0; i < years; i++)
    {
        sum += yearBottles.second()[i];
    }

    return sum;
}
