#include <iostream>


struct A
{
    int i;
    char j;
};


int main()
{
    A a;
    A* pa = &a;

    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(pa) << std::endl;


    return 0;
}
