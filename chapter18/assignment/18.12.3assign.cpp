#include <iostream>


// definition for 0 parameters


static long double sum = 0;

long double sum_value() {return 0;}


template<typename T>
long double sum_value(const T& t) 
{
    return t;
}


template<typename T, typename... Args>
long double sum_value(const T& value, const Args&... args)
{
    // sum += value;
    // std::cout << value << ", ";
    // sum_value(args...);

    return value + sum_value(args...);
}


int main()
{
    long double _sum = sum_value(1, 89, 12.34, 'A');
    std::cout << _sum << std::endl;

    return 0;
}
