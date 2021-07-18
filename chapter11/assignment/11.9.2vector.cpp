#include <cmath>
#include "11.9.2vector.h"

namespace VECTOR
{
    const double rad_to_deg = 45 / atan(1.0);

    double Vector::angval() const
    {
        double ang;
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
        return ang;
    }

    double Vector::magval() const
    {
        double mag = sqrt(x *x + y * y);
        return mag;
    }

    Vector::Vector()
    {
        x = y = 0.0;
        mode = RECT;
    }

    void Vector::set_x(double mag, double ang)
    {
        x = mag * cos(ang);
    }

    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
        }
        else
        {
            std::cout << "Incorrect 3rd argument to Vector() -- ";
            std::cout << "vector set to0\n";
            x = y = 0.0;
            mode = RECT;

        }
    }

    void Vector::reset(double n1, double n2, Mode form)
        {
            mode = form;
            if (form == RECT)
            {
                x = n1;
                y = n2;
            }
            else if(form == POL)
            {
                double mag = n1;
                double ang = n2 / rad_to_deg;
                set_x(mag, ang);
                set_y(mag, ang);
            }
            else
            {
                std::cout << "Incorrect 3rd argument to Vector() -- ";
                std::cout << "vector set to 0\n";
                x = y = 0.0;
                mode = RECT;
            }
        }

    Vector::~Vector()
    {

    }

    void Vector::polar_mode()
    {
        mode = POL;
    }

    void Vector::rect_mode()
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (v.mode == Vector::RECT)
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        else if(v.mode == Vector::POL)
        {
            os << "(m, a) = (" << v.magval() << ", " << v.angval() * rad_to_deg << ")";
        }
        else
            os << "Vector object mode is invalid";

        return os;
    }

    Vector::operator double() const
    {
        return magval();
    }
}
