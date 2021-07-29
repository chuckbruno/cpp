#include "13.11.4port.h"
#include <iostream>
#include <cstring>

Port::Port(const char * br, const char * st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);

    strcpy(style, st);
    bottles = b;
}


Port::Port(const Port & p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}


Port & Port::operator=(const Port & p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;

    return *this;
}


Port & Port::operator+=(int b)
{
    bottles += b;
    return *this;
}


Port & Port::operator-=(int b)
{
    if(bottles < b)
    {
        std::cout << "Your bottles is not enough" << std::endl;
        return *this;
    }

    bottles -= b;
    return *this;
}


void Port::Show() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Style: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}


ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}


VintagePort::VintagePort(): Port()
{
    nickname = new char[10];
    strcpy(nickname, "The Noble");
    year = 0;
}




VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
    :Port(br, "none", b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}


VintagePort::VintagePort(const VintagePort & vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}


VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    Port::operator=(vp);
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}


void VintagePort::Show() const
{
    Port::Show();

    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}


ostream & operator<<(ostream & os, const VintagePort & vp)
{
    os << (const Port &) vp << ", " << vp.nickname << ", " << vp.year << endl;
}
