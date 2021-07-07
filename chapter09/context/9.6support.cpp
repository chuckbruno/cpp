#include <iostream>

extern double warming;

void update(double dt);
void local();


void update(double dt)
{
    extern double warming;
    warming += dt;
    std::cout << "Updating global warming to " << warming;
    std::cout << " degrees. \n";
}


void local()
{
    double warming = 0.8;
    std::cout << "Local warming = " << warming << " degrees.\n";
    std::cout << "But global warming = " << ::warming;
    std::cout << " degrees.\n";
}
