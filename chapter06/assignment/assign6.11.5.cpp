#include <iostream>


int main()
{
    unsigned int income;
    float tax;
    std::cout << "Input your income: ";
    while (std::cin >> income)
    {
        while(income > 0)
        {
            if (income > 35000)
            {
                std::cout << "jiao" << std::endl;                
                int tempTax = (income - 35000) * 0.2;
                tax += tempTax;
                income -= 35000;
                std::cout << "@@@" << std::endl;
            }
            else if (income > 15001 && income < 35000)
            {
                int tempTax = (income - 15000) * 0.15;
                tax += tempTax;
                income -= 15000;
                std::cout << "#####" << std::endl;
            }
            else if (income > 5001 && income < 15000)
            {
                int tempTax = (income - 5000) * 0.1;
                tax += tempTax;
                income -= 5000;
                std::cout << "$$$" << std::endl;

            }
        }
        
        std::cout << income << " needs to pay: " << tax << std::endl;

    }

    std::cout << income << " needs to pay: " << tax << std::endl;
}
