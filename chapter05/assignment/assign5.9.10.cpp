#include <iostream>


int main()
{
    int row = 0;
    int column = 0;

    int num;

    std::cout << "Enter number of rows: ";
    std::cin >> num;

    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            std::cout << " . ";
        }
        for (int m = 0; m < i; m++)
        {
            std::cout << " * " ;
        }
        std::cout << std::endl;
    }

    return 0;
}
