#include <iostream>
#include "9.6.4sales.h"

using namespace SALES;


int main()
{
    Sales sales1;
    const double ar[4] = {23.45, 56.23, 67.45, 98.45};
    setSales(sales1, ar, 4);
    // sales1.sales[0] = 23.4;
    // sales1.average = 34;
    // sales1.min = 90;
    // sales1.max = 340;
    showSales(sales1);

    return 0;
}