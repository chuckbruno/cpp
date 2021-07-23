#include "12.10.1assign.h"

int main()
{
    Cow cw1;
    Cow cw2("Chuck", "Movie", 120);

    Cow cw3(cw2);
    Cow cw4("Bruno", "Running", 90);
    Cow cw5 = cw4;


    cw1.ShowCow();
    cw2.ShowCow();
    cw3.ShowCow();
    cw4.ShowCow();
    cw5.ShowCow();

    return 0;
}
