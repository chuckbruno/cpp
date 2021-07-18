#include <iostream>
#include "10.10.4assign.h"

using namespace SALES;


int main()
{
    double ar[4] = {23.45, 56.23, 67.45, 98.45};
    Sales sales1(ar, 4);

    sales1.ShowSales();

    return 0;
}