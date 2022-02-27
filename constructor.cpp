
#include <iostream>

class X{
    public:
        ~X()
        {
            std::cout << "X::~X()" << std::endl;
        }
};

class Y{
    public:
        ~Y()
        {
            std::cout << "Y::~Y()" << std::endl;
        }
};

class Z{
    public:
        ~Z()
        {
            std::cout << "Z::~Z()" << std::endl;
        }
    private:
        X x;
        Y y;
};
int main()
{
    std::cout <<  sizeof(X) << std::endl;
    std::cout <<  sizeof(Z) << std::endl;
    return 0;
}
