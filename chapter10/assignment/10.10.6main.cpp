#include "10.10.6assign.h"

int main()
{
    Move ma;
    Move mb(23, 96);

    mb.showmove();

    ma.reset(156, 987);
    ma.showmove();

    Move mc = ma.add(mb);
    mc.showmove();

    mb.reset();
    mb.showmove();


    return 0;
}