#include <iostream>
#include <array>
#include <string>


const int Season = 4;
const std::array<std::string, Season> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Season> * pa);
void show(std::array<double, Season> da);


int main()
{
    std::array<double, Season> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}


void fill(std::array<double, Season> *pa)
{
    for(int i = 0; i < Season; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> (*pa)[i];
    }
}

void show(std::array<double, Season> da)
{
    double total = 0.0;

    std::cout << "\nEXPENSES\n";

    for (int i = 0; i < Season; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << std::endl;
        total += da[i];
    }

    std::cout << "Total Expenses: $" << total << std::endl;

}


