#include "10.10.4assign.h"
#include <iostream>

namespace SALES
{
    Sales::Sales()
    {
        average = 0;
        max = 0;
        min = 0;
    }

    Sales::Sales(double arr[], int n)
    {
        double total = 0;
        double tmin = arr[0];
        double tmax = arr[0];
        for (int i = 0; i < n; i++)
        {
            sales[i] = arr[i];
            total += arr[i];
            if (arr[i] > tmax)
                tmax = arr[i];

            if (arr[i] < tmin)
                tmin = arr[i];

        }

        average = total / n;
        max = tmax;
        min = tmin;
    }

    void Sales::ShowSales()
    {
        std::cout << sales[0] << ", " << sales[1] << ", " << sales[2] << ", " << sales[3] <<std::endl;
        std::cout << average << std::endl;
        std::cout << max << std::endl;
        std::cout << min << std::endl;
    }

}