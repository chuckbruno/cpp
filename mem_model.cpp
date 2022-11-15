#include <iostream>

typedef struct Point3
{
    float x;
    float y;
    float z;
} BigPoint3;


class Point3d
{
    public:
    Point3d(float x= 0.0, float y = 0.0, float z=  0.0)
    :_x(x),_y(y),_z(z){}

    float x() const {return _x;}
    float y() const {return _y;}
    float z() const {return _z;}

    private:
    float _x;
    float _y;
    float _z;
};


inline std::ostream& operator<<(std::ostream& os, const Point3d& pt)
{
    os << "Point3d(" << pt.x() << ", " << pt.y() << ", " << pt.z() << ")";
    return os;
}

class Base
{
    public:
    Base(int i): baseI(i){};
    virtual void print(void){std::cout << "调用了虚函数Base::print()";}
    virtual void setI(){std::cout << "调用了虚函数Base::setI";}
    virtual ~Base(){}
    public:
    int baseI;
};


int main()
{
    // BigPoint3 a = {1,2,3};
    // std::cout << (&a) << std::endl;
    // std::cout << &(a.x) << std::endl;
    // std::cout << *((float *)(&a)) << std::endl;
    // std::cout << *((float *)(&a)+1) << std::endl;
    // std::cout << *((float *)(&a)+2) << std::endl;

    // Point3d b{2, 4, 9};
    // std::cout << b << std::endl;
    typedef void(* Func)(void);

    Base b(1000);
    std::cout << ((int *)(&b)) << std::endl;
    std::cout << ((int *)(&b.baseI)) << std::endl;
    std::cout << (int *)*(int *)(&b) << std::endl;
    Func vfunc = (Func)*((int *)*(int *)(&b));
    vfunc();

    // getchar();
}
