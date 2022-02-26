#include <iostream>
#pragma pack(2)

class Point{
    public:
        Point(unsigned short x, int y): m_x(x), m_y(y)
    {}
        virtual ~Point(){};
    public:
        unsigned short m_x;
        int m_y;
};


int main()
{

    Point p(3, 2);
    std::cout << "sizeof(p) = " << sizeof(p) << std::endl;
    std::cout << "&p = " << &p << std::endl;
    std::cout << "&p.m_x = " << &p.m_x << std::endl;
    std::cout << "&p.m_y = " << &p.m_y << std::endl;

    return 0;
}
