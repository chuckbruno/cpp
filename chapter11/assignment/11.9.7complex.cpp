#include "11.9.7complex.h"


complex::complex()
{
    real = imaginary = 0.0;
}


complex::complex(double a, double b)
{
    real = a;
    imaginary = b;
}


complex complex::operator+(complex & com) const
{
    return complex(real + com.real, imaginary + com.imaginary);
}


complex complex::operator-(complex & com) const
{
    return complex(real - com.real, imaginary - com.imaginary);
}


complex complex::operator*(complex & com) const
{
    double tempreal = real * com.real - imaginary * com.imaginary;
    double tempimag = real * com.imaginary + imaginary * com.real;

    return complex(tempreal, tempimag);
}


complex operator*(double x, const complex & com)
{
    return complex(com.real * x, com.imaginary * x);
}


complex complex::operator~() const
{
    return complex(real, imaginary * -1);
}


std::ostream& operator<<(std::ostream& os, const complex& com)
{
    os << "(" << com.real << "," << com.imaginary << "i)";
    return os;
}


std::istream& operator>>(std::istream& is, complex& com)
{
    double c, d;
    std::cout << "real: ";
    is >> c;
    std::cout << "imaginary: ";
    is >> d;

    com.real = c;
    com.imaginary = d;

    return is;
}

