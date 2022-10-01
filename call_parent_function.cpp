#include <iostream>

class A
{
    public:
    virtual void func()
    {
        std::cout << "thsi is A" << std::endl;
    }
};

class B: public A
{
    public:
    virtual void func() override
    {
        std::cout << "this is B" << std::endl;
    }
};

int main()
{
    A a;
    B b;
    A* c = new B;
    a.func();
    b.func();
    b.A::func();
    c->func();
    c->A::func();
    return 0;
}