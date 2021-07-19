#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

class complex
{
private:
    double real;
    double imaginary;
public:
    complex();
    complex(double a, double b);
    complex operator+(complex & com) const;
    complex operator-(complex & com) const;
    complex operator*(complex & com) const;
    complex operator~() const;

    friend complex operator*(double x, const complex & com);
    friend std::ostream& operator<<(std::ostream& os, const complex& com);
    friend std::istream& operator>>(std::istream& is, complex& com);
};


#endif 