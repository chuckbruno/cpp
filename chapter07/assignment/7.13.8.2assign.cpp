#include <iostream>


const int Seasons = 4;



struct expenses
{
    double expenses_arr[Seasons];

};
const char* Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

void fill(expenses * exPtr);
void show(const expenses * exPtr);


int main()
{
    expenses* exPtr = new expenses;
    fill(exPtr);
    show(exPtr);

    delete exPtr;
}


void fill(expenses* exPtr)
{
    for(int i =0; i < Seasons; i++)
    {
        std::cout << "Enter " << *(Snames + i) << " expense: ";
        std::cin >>*(exPtr->expenses_arr + i);


    }
}


void show(const expenses * exPtr)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i =0; i < Seasons; i++)
    {
        std::cout << *(Snames + i) << ": $" << *(exPtr->expenses_arr + i) << std::endl;
        total += *(exPtr->expenses_arr + i);
    }


    std::cout << "Total Expenses: $" << total << std::endl;
}
