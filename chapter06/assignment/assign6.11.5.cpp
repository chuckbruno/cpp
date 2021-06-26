#include <iostream>


int main()
{
    int income;
    float tax;
    std::cout << "Input your income: ";
    std::cin >> income;
    while (income > 5000)
    {
        if (income > 35000)
        {
            int tempTax = (income - 35000) * 0.2;
            tax += tempTax;
            income = 35000;
        }
        else if (income > 15000 && income <= 35000)
        {
            int tempTax = (income - 15000) * 0.15;
            tax += tempTax;
            income = 15000;
        }
        else if (income > 5000 && income <= 15000)
        {
            int tempTax = (income - 5000) * 0.1;
            tax += tempTax;
            income = 5000;

        }
    }

    std::cout <<  "Tax: " << tax << std::endl;
}
