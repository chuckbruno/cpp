#include <iostream>

// point to an array

int main()
{

    int array[2][3] = { {1, 2, 3}, {4, 5, 6}};

    int (*pa)[3] = array;

    std::cout << *(*(pa + 1) + 2) << std::endl;

    return 0;
}