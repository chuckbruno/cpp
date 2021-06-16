#include <iostream>
#include <array>


const int ArSize = 100;

int main()
{
    std::array<long double, ArSize> factorials;
    //long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for(int i = 2; i < ArSize + 1; i++)
    {
        factorials[i] = i * factorials[i-1];
    }
    for(int i = 0; i < ArSize + 1; i++)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
    return 0;
}
