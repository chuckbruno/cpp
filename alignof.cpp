
#include <iostream>


struct Storage
{
    char a;
    int b;
    double c;
    long long d;
};

struct aligas(std::max_align_t) AlignsStorage{
    char a;
    int b;
    double c;
    long long d;
};


int main()
{
    std::cout << alignof(Storage) << std::endl;
    std::cout << sizeof(Storage) << std::endl;
    std::cout << sizeof(int) << std::endl;

    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    //std::cout << alignof(AlignsStorage) << std::endl;

    return 0;
}
