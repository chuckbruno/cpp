#include <iostream>
#include <math.h>
#include <string.h>


int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

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

    // int a=1, b=2, c=3;
    // int *ptr[3];

    // ptr[0] = &a;
    // ptr[1] = &b;
    // ptr[2] = &c;

    // std::cout << **(ptr + 2)<< std::endl;

    // int aa[2][3] = {{1, 2, 3},
    //                 {4, 5, 6}};

    // int (*p2)[3] = aa;
    // std::cout << *(*(p2 + 1) + 2) << std::endl;


    typedef struct {
        int age;
        char name[8];
    } Student;

    // Student s;
    // s.age = 20;
    // strcpy(s.name, "lisi");

    // Student *p = &s;
    // std::cout << p->age << p->name << std::endl;

    // Student s[3];
    // Student *p = s;

    // std::cout << "size of Student = " << sizeof(Student) << std::endl;
    // std::cout << &s[1] << std::endl;
    // std::cout << &s[2] << std::endl;
    // p++;
    // std::cout << p << std::endl;

    // function pointer

    // int (*p)(int a, int b);
    // p = add;

    // int c = p(12, 45);
    // std::cout << c << std::endl;

    int a = 10, b = 12;
    int (*p[4])(int, int);

    p[0] = add;
    p[1] = sub;
    p[2] = mul;
    p[3] = divide;

    std::cout << p[0](a, b) << std::endl;
    std::cout << p[1](a, b) << std::endl;
    std::cout << p[2](a, b) << std::endl;
    std::cout << p[3](a, b) << std::endl;

    return 0;
}
