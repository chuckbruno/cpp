typedef struct Stag {int a, b, c, d;} S;

#include <iostream>

double image1(const double& im) {return 2.3;}

double image(const double im){return 89.9;}

int main(){
    double x = 0;
    double* p = &x;
    double& r = x;

    std::cout << sizeof(x) << std::endl;
    std::cout << sizeof(r) << std::endl;
    std::cout << sizeof(p) << std::endl;

    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    std::cout << x << std::endl;
    std::cout << r << std::endl;
    std::cout << &x << std::endl;
    std::cout << &r << std::endl;

    image(232.9);

     
}