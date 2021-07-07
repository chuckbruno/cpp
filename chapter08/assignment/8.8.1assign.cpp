#include <iostream>

void printString(const char* text, int n=0)
{
    if (n != 0)
        std::cout << text << std::endl;

    std::cout << text << std::endl;
}


int main()
{
    printString("Hello world");
}
