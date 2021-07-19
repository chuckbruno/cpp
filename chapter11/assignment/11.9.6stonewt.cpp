#include <iostream>
#include "11.9.6stonewt.h"


Stonewt::Stonewt(double lbs)
{

    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}


Stonewt::Stonewt(int stn, double lbs)
{

    stone = stn;
    pds_left = lbs;
    pounds = lbs + stn * Lbs_per_stn;

}


Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}


Stonewt::~Stonewt()
{

}

Stonewt Stonewt::operator+(const Stonewt & b) const
{
    return Stonewt((stone + b.stone) * Lbs_per_stn + (pounds + b.pounds));

}

Stonewt Stonewt::operator-(const Stonewt & b) const
{
    return Stonewt((stone - b.stone) * Lbs_per_stn + (pounds - b.pounds));
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(stone * n * Lbs_per_stn + pounds * n);
}

void Stonewt::show_stn() const
{
    std::cout << stone << " stone " << pds_left << " pounds\n";
}


void Stonewt::show_lbs() const
{
    std::cout << pounds << std::endl;
}

bool Stonewt::operator>(const Stonewt & b) const
{
    return pounds > b.pounds;
}

bool Stonewt::operator<(const Stonewt & b) const
{
    return pounds < b.pounds;
}

bool Stonewt::operator>=(const Stonewt & b) const
{
    return pounds >= b.pounds;
}

bool Stonewt::operator<=(const Stonewt & b) const
{
    return pounds <= b.pounds;
}

bool Stonewt::operator==(const Stonewt & b) const
{
    return pounds == b.pounds;
}

bool Stonewt::operator!=(const Stonewt & b) const
{
    return pounds != b.pounds;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st)
{
    os << st.stone << " stone " << st.pds_left << " pounds";
    return os;
}


