#include <iostream>
#include "14.7.1winec.h"


int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;


    cout << "Enter name of wine: ";
    char lab[50];
    cin.getline(lab, 50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holdings(lab, yrs);
    holdings.GetBottles();
    holdings.Show();

    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};

    Wine more("Gushing Grapd Red", YRS, y, b);
    more.Show();

    cout << "Total bottles for " << more.Label()
        << ": " << more.sum() << endl;

    cout << "Bye\n";
    return 0;
}
