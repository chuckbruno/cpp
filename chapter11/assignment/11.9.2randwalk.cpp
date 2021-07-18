#include <iostream>
#include <cstdlib>
#include <ctime>
#include "11.9.2vector.h"


using namespace VECTOR;


int main()
{
    std::srand(std::time(0));
    double direction;

    Vector step;
    Vector result(0.0, 0.0);

    unsigned long steps = 0;
    double target;

    double dstep;
    std::cout << "Enter target distance (q to quit): ";

    while(std::cin >> target)
    {
        std::cout << "Enter step length: ";
        if (!(std::cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = std::rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }

        std::cout << "After " << steps << " step, the subject "
            "has the following location;\n";
        std::cout << result << std::endl;
        result.polar_mode();
        std::cout << " or\n" << result << std::endl;
        std::cout << "Average outward distance per step = " << result.magval() / steps << std::endl;

        steps = 0;
        result.reset(0.0, 0.0);
        std::cout << "Enter target distance (q to quit): ";
    }

    std::cout << "Bye!\n";
    std::cin.clear();
    while(std::cin.get() != '\n')
        continue;

    Vector v1(3, 4);
    double t = double(v1);

    std::cout << t << std::endl;

    return 0;
}
