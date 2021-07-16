#include <iostream>
#include "mytime.h"


int main()
{
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;


    std::cout << "planning time = ";
    planning.Show();
    std::cout << std::endl;

    std::cout << "coding time = ";
    coding.Show();
    std::cout << std::endl;

    std::cout << "fixing time = ";
    fixing.Show();
    std::cout << std::endl;

    total = coding.Sum(fixing);
    std::cout << "coding.Sum(fixing) = ";
    total.Show();
    std::cout << std::endl;

    return 0;

}
