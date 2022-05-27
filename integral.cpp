#include <iostream>


double square(double x)
{
    return 2.0 * x * x;
}


int main()
{
    double re = 0.0;
    double delta = 0.001;
    for(double i = 0; i <= 1; i+= delta)
    {
        re += square(i) * delta;
    }

    std::cout << re << std::endl;

    return 0;

}
