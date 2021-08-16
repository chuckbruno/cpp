#include <iostream>
#include <cctype>

int main()
{

    std::cout << "Enter chars: ";
    char input;
    int sum = 0;
    while(std::cin >> input && input != '$')
    {
        sum += 1;
    }

    std::cout << "The Sum of characters befor '$' is " << sum << std::endl;
    return 0;
}