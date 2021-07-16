#include <iostream>
#include "9.6.4sales.h"

void SALES::setSales(Sales & s, const double ar[], int n = 4)
{
    double total = 0;
    double tmin = ar[0];
    double tmax = ar[0];

    for (int i = 0; i < n; i++)
    {
        s.sales[i] = ar[i];
        total += ar[i];
        if (ar[i] > tmax)
            tmax = ar[i];

        if (ar[i] < tmin)
            tmin = ar[i];
    }

    double average = total / 4;
    s.average = average;
    s.min = tmin;
    s.max = tmax;

}

void SALES::setSales(Sales & s)
{
    double a, b, c, d;
    std::cout << "Enter four salse numbers: ";
    std::cin >> a >> b >> c >> d;

    s.sales[0] = a;
    s.sales[1] = b;
    s.sales[2] = c;
    s.sales[3] = d;

    s.average = (a + b + c + d) / 4;
    double tmin, tmax;
    for (int i = 0; i < 4; i++)
    {
        if (s.sales[i] > tmax)
            tmax = s.sales[i];

        if (s.sales[i] < tmin)
            tmin = s.sales[i];
    }
}


void SALES::showSales(const Sales & s)
{
    std::cout << s.sales[0] << ", " << s.sales[1] << ", " << s.sales[2] << ", " << s.sales[3] <<std::endl;
    std::cout << s.average << std::endl;
    std::cout << s.max << std::endl;
    std::cout << s.min << std::endl;
}

