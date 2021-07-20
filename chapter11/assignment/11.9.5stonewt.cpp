#include <iostream>
#include "11.9.5stonewt.h"


Stonewt::Stonewt(double lbs, Mode form)
{

    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}


Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    mode = form;
    if (mode == Stonewt::STONE)
    {
        stone = stn;
        pds_left = lbs;
        pounds = lbs + stone * Lbs_per_stn;
    }
    else if (mode == Stonewt::INTPOUND)
    {
        stone = stn + lbs / Lbs_per_stn;
        pounds = lbs + stone *  Lbs_per_stn;

    }
    else if(mode == Stonewt::FLTPOUND)
    {
        stone = stn + lbs / Lbs_per_stn;
        pounds = lbs + stone * Lbs_per_stn;
    }
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
    mode = Stonewt::STONE;
}

Stonewt::~Stonewt()
{

}

Stonewt Stonewt::operator+(const Stonewt & b) const
{
    return Stonewt(stone + b.stone, pounds + b.pounds);

}

Stonewt Stonewt::operator-(const Stonewt & b) const
{
    return Stonewt(stone - b.stone, pounds - b.pounds);
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
        os << st.stone << " stone " << st.pds_left << " pounds";
    }
    else if (st.mode == Stonewt::INTPOUND)
    {
        os << st.pounds << " pounds";
    }
    else
    {
        os << st.pounds << " pounds";
    }
    return os;
}


