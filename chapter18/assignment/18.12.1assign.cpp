
#include <iostream>
#include <initializer_list>

template<typename T>
T average_list(std::initializer_list<T> il)
{
    T sum = 0;
    int counter = 0;
    // for(auto x: il)
    // {
    //     sum += x;
    //     counter++;
    // }
    for(auto p = il.begin(); p != il.end(); p++, counter++)
        sum += *p;

    T average = sum / counter;
    return average;
}



// template<typename T>
// T average_list(const T ar[])
// {
//     T sum = 0;
//     cout << ar << endl;
//     int counter = 0;
//     for(auto x: ar)
//     {
//         sum += x;
//         counter++;
//     }

//     T average = sum / counter;
//     return average;
// }


int main()
{
    auto q = average_list({15.4, 10.7, 9.0});
    std::cout << q << std::endl;
    std::cout << average_list({10, 20, 19, 17, 45, 38}) << std::endl;
    auto ad = average_list<double>({'A', 70, 65.33});
    std::cout << ad << std::endl;
    return 0;
}
