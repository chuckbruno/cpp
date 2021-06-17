#include <iostream>


int main()
{
    int start, end;
    int sum = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        sum += i;
    }

    std::cout << "The sum of all numbers between " << start << " " << "between " << end << " is " << sum << " " << std::endl;

    return 0;

}
