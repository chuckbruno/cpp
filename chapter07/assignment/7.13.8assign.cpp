#include <iostream>

const int Season = 4;

const char* Snames[4] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double*  pa);
void show(const double* pa);


int main()
{
    double expenses[4];
    fill(expenses);
    show(expenses);

    return 0;
}


void fill(double* pa)
{
    for (int i =0; i < Season; i++)
    {
        std::cout << "Enter " << *(Snames + i) << " expenses: ";
        std::cin >> *(pa + i);
    }
}


void show(const double* pa)
{
    double total = 0.0;
    std::cout << "\nEXPENSENSES\n";

    for(int i = 0; i < Season; i++)
    {
        std::cout << *(Snames + i) << ": $" << *(pa + i) << std::endl;
        total += *(pa + i);
    }

    std::cout << "Total Expenses: $" << total << std::endl;


}


