#ifndef STONE_H_
#define STONE_H_
#include <iostream>

class Stonewt
{
    public:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();
        ~Stonewt();

        Stonewt operator+(const Stonewt & b) const;
        Stonewt operator-(const Stonewt & b) const;
        Stonewt operator*(double n) const;

        bool operator>(const Stonewt & b) const;
        bool operator<(const Stonewt & b) const;
        bool operator>=(const Stonewt & b) const;
        bool operator<=(const Stonewt & b) const;
        bool operator==(const Stonewt & b) const;
        bool operator!=(const Stonewt & b) const;

        void show_lbs() const;
        void show_stn() const;
        friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};


#endif
