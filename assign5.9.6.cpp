#include <iostream>
#include <string.h>


int main()
{

    const int years = 3;
    const int months = 12;
    int sales[years][months] = 
    {
        {100, 120, 130, 140, 155, 162, 132, 198, 620, 1245, 785, 963},
        {130, 42, 87, 35, 72, 877, 22, 2120, 12, 357, 741, 523},
        {400, 53, 78, 74152, 45, 964, 78, 4196, 426, 359, 86, 42},
    };


    int allSales = 0;
    for (int i = 0; i < years; i++)
    {
        int salesOfYear = 0;
        for (int j = 0; j < months; j++)
        {
            salesOfYear += sales[i][j];
        }

        std::cout << salesOfYear << std::endl;

        allSales += salesOfYear;
    }

    std::cout << allSales << std::endl;

    return 0;
}
