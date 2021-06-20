#include <iostream>
#include <cctype>


int main()
{
    const int MaxSiz = 10;

    double donation[MaxSiz];
    std::cout << "Please enter the donation: \n";

    int i = 0;

    while(i < MaxSiz && std::cin >> donation[i])
    {
        ++i;
    }
    double total = 0.0;
    for (int j=0; j < i; j++)
    {
        total += donation[j];
    }

    double average = total / i;

    std::cout << "The average value: " << average << std::endl;

    int num = 0;
    for (int j=0; j < i; j++)
    {
        if (donation[j] > average)
        {
            num += 1;
        }
    }

    std::cout << "There are " << num << " number(s) larger than the average. " << std:: endl;

    std::cout << "Donations: " << std::endl;

    for (int j =0; j < i; j++)
    {
        std::cout << donation[j] << " ";
    }

    return 0;


}
