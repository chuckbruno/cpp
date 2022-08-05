#include <iostream>

using namespace std;

class Base
{
    public:
        int a = 1;
        virtual void print(int n = 2)
        {
            printf("Base: %d\n", a + n);
        };
};


class Derive: public Base
{
    public:
        int b = 3;
        virtual void print(int n = 10) override
        {
            printf("Derive: %d\n", b + n);
        };
};


int main()
{
    Base * ptr = new Derive[10];
    ptr[6].print();
    return 0;
}
