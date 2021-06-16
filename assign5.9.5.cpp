#include <iostream>
#include <string.h>

int main()
{
    const char* months[12] = {
        "January",
        "Febuary",
        "March",
        "April",
        "May",
        "June",
        "July",
        "Auguest",
        "September",
        "October",
        "November",
        "December"
    };


    int sales[12];
    int sum = 0;
    for (int i = 0; i < 12; ++i)
    {
        std::cout << "Enter " << months[i] << " sales: ";
        std::cin >> sales[i];
        sum += sales[i];
    }

    std::cout << "Sales of the whole year: " << sum <<  std::endl;
    std::cout << "Month" << "         " << "Sales" << std::endl;

    for (int j = 0; j < 12; ++j)
    {
        std::cout << months[j] << "        " << sales[j] << std::endl;
    }

    return 0;
}