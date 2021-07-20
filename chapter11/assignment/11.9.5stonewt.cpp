#include <iostream>

#include "11.9.5stonewt.h"

Stonewt::Stonewt(double lbs, Mode mode)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);

    pounds = lbs;
}


Stonewt::Stonewt(int stn, double lbs, Mode mode)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
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
    return Stonewt(stone + b.stone, pounds + b.pounds, Stonewt::STONE);

}

Stonewt Stonewt::operator-(const Stonewt & b) const
{
    return Stonewt(stone - b.stone, pounds - b.pounds, Stonewt::STONE);
}

Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(stone * n, pounds * n, Stonewt::STONE);
}

void Stonewt::show_stn() const
{
    std::cout << stone << " stone " << pds_left << " pounds\n";
}

void Stonewt::show_lbs() const
{
    std::cout << pounds << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st)
{
    if (st.mode == Stonewt::STONE)
    {
        os << st.stone << " stone " << st.pds_left << " pounds\n";
    }
    else if (st.mode == Stonewt::INTPOUND)
    {
        os << st.pounds << " pounds\n";
    }
    else
    {
        os << st.pounds << " pounds\n";
    }
    return os;
}


