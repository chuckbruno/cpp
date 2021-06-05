#include <iostream>
#include <math.h>


int main()
{

    // int a = 10;
    // int b = 20;

    // const int * const p = &a;
    // std::cout << *p << std::endl;

    // std::cout << cosf(30) << std::endl;
    // std::cout << *p << std::endl;

    // char *ptrChar = "zhangsan";


    // while (*ptrChar != '\0')
    // {
    //     std::cout << *ptrChar++ << std::endl;

    // }

    // int a[3] = {1, 2, 3};

    // void *p = a;
    // std::cout << p << std::endl;

    // p = p + 1;
    // std::cout << p << std::endl;

    int a=1, b=2, c=3;
    int *ptr[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    std::cout << **(ptr + 2)<< std::endl;

    return 0;
}
