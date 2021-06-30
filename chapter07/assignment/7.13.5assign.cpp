#include <iostream>


double factorial(int n);


int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    while(n > 0)
    {
        double result;
        result = factorial(n);

        std::cout << n << "! is " << result << std::endl;
        std::cout << "Enter a number: ";
        std::cin >> n;
    }

    return 0;
}


double factorial(int n)
{
    if(n==0)
    {
        return (double)1;
    }

    return n * factorial(n - 1);
}
