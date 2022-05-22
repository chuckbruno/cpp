#include <iostream>


const int iter = 5;

float sqrt(float y)
{
    float x = 0.5f * y;
    for(int i = 0; i < iter; i++)
    {
        x = 0.5f * (x + y/x);
    }

    return x;
}


int main()
{
    float a = sqrt(10);
    std::cout << a << std::endl;

    return 0;
}
