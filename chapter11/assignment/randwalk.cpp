#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vector.h"


using namespace VECTOR;



int main()
{
    std::fstream fs;
    fs.open("test.txt", std::fstream::in | std::fstream::out | std::fstream::app);

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

        fs << "Target Distance: " << target << ", " << "Step Size: " << dstep << std::endl;
        while (result.magval() < target)
        {
            direction = std::rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            fs << steps << "): " << result << std::endl;
            steps++;
        }

        fs << "After " << steps << " step, the subject "
            "has the following location;\n";
        fs << result << std::endl;
        result.polar_mode();
        fs << " or\n" << result << std::endl;
        fs << "Average outward distance per step = " << result.magval() / steps << std::endl;

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

    fs.close();

    return 0;
}
