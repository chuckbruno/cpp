#include <iostream>
#include "mytime2.h"


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

    total = coding + fixing;
    std::cout << "coding.Sum(fixing) = ";
    total.Show();
    std::cout << std::endl;

    Time morefixing(3, 28);
    std::cout << "more fixing time = ";
    morefixing.Show();
    std::cout << std::endl;
    total = morefixing.operator+(total);

    std::cout << "morefixing.operator+(total) = ";
    total.Show();

    std::cout << std::endl;

    Time diff;
    diff = fixing - coding;
    std::cout << "fixing time - coding time = ";
    diff.Show();
    std::cout << std::endl;

    Time adjusted;
    adjusted = total * 1.5;
    std::cout << "adjusted work time = ";
    adjusted.Show();
    std::cout << std::endl;
    return 0;


    return 0;

}
