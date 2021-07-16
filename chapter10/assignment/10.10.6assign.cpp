#include "10.10.6assign.h"
#include <iostream>


Move::Move(double a, double b)
{
    x = a; y = b;
}


void Move::showmove() const
{
    std::cout << "x = " << x << " y = " << y << std::endl;
}


Move Move::add(const Move & m) const
{
    double tx = x + m.x;
    double ty = y + m.y;

    Move tmove(tx, ty);
    return tmove;
}


void Move::reset(double a, double b)
{
    x = a; y = b;
}