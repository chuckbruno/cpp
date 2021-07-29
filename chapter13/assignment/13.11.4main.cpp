#include "13.11.4port.h"

void ViewPort(const Port & p)
{
    p.Show();
}


int main()
{
    Port p1("GreatWall", "tawny", 30);
    Port p2("ZhangYu", "ruby", 60);

    VintagePort vp1("GreatWall", 45, "The Noble", 20);
    VintagePort vp2("Chixiazhu", 23, "Old Velvet", 15);

    Port p3;
    p3 = p1;

    p3.Show();
    cout << p3 << endl;

    p3 += 5;
    cout << p3 << endl;

    p3 -= 10;
    cout << p3 << endl;

    VintagePort vp3;
    vp3 = vp2;
    vp3.Show();

    cout << vp3 << endl;
    ViewPort(vp3);

    return 0;

}
