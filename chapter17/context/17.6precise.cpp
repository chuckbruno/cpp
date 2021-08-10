#include <iostream>

int main()
{
    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;
    std::cout.setf(std::ios_base::showpoint);
    std::cout << "\"Furry Friends\" is $" << price1 << "!\n";
    std::cout << "\"Fiery Friends\" is $" << price2 << "!\n";

    std::cout.precision(2);

    std::cout << "\"Fiery Friends\" is $" << price2 << "!\n";
    std::cout << "\"Furry Friends\" is $" << price1 << "!\n";

    return 0;
}
