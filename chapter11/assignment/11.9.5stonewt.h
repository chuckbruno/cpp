#ifndef STONE_H_
#define STONE_H
#include <iostream>

class Stonewt
{
    public:
        enum Mode {STONE, INTPOUND, FLTPOUND};
    private:
        Mode mode;
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs, Mode mode);
        Stonewt(int stn, double lbs, Mode mode);
        Stonewt();
        ~Stonewt();

        Stonewt operator+(const Stonewt & b) const;
        Stonewt operator-(const Stonewt & b) const;
        Stonewt operator*(double n) const;

        void show_lbs() const;
        void show_stn() const;
        friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};


#endif
