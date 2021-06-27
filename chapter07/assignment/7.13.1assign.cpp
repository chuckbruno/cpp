#include <iostream>


float average(int a, int b);


int main()
{
    float a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    while(a != 0 && b != 0)
    {
        float result = average(a, b);
        std::cout << result << std::endl;
        std::cout << "Enter two numbers: ";
        std::cin >> a >> b;
    }

    std::cout << "End" << std::endl;

    return 0;
}


float average(int a, int b)
{
    float c = (2.0 * a * b) / (a + b);

    return c;
}
