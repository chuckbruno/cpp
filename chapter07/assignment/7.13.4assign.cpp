#include <iostream>

long double probability(unsigned numbers, unsigned picks);


int main()
{
    long double result;
    result = probability(47, 5);
    result = result * probability(27, 1);

    long double probability_of_win = 1 / result;
    std::cout << probability_of_win << std::endl;

    return 0;

}


long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;

    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }
    return result;

}