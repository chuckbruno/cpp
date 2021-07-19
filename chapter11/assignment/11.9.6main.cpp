#include "11.9.5stonewt.h"
#include <iostream>

void dispay(const Stonewt & st, int n);

int main()
{
    Stonewt incognito(275, 10, Stonewt::STONE);
    Stonewt wolfe(285, 23, Stonewt::STONE);
    Stonewt taft(21, 2, Stonewt::STONE);

    std::cout << incognito << std::endl;
    std::cout << wolfe << std::endl;
    std::cout << taft << std::endl;

    Stonewt sum;
    sum = incognito + wolfe + taft;

    std::cout << sum << std::endl;

    std::cout << incognito * 12 << std::endl;

}
