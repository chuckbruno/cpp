#include <iostream>

int main()
{
    float inputNum;
    float sum = 0;

    while(inputNum != 0)
    {
        std::cout << "Enter a number: ";
        std::cin >> inputNum;
        sum += inputNum;
    }

    std::cout << "The sum of all input numbers is: " << sum << std::endl;

    return 0;
}
