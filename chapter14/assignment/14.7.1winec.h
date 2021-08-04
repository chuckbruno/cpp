#ifndef WINEC_H_
#define WINEC_H_

#include "14.7.1pairs.h"


#include <valarray>
#include <string>


typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;


class Wine
{
    private:
        std::string label;
        PairArray yearBottles;
        int years;
    public:
        Wine();
        Wine(const char * l, int y, const int yr[], const int bot[]);
        Wine(const char * l, int y);
        void GetBottles();
        void Show();
        std::string & Label();
        int sum();
};

#endif