#include <iostream>

class A
{

public:
    A() = default;
    explicit A(int t_height)
    : height(t_height)
    {}

    void GetHeight()
    {
        std::cout << height << std::endl;
    }

private:
    int height;

};


int main()
{

    // A c = 95; // error, 因为A的构造函数加了explicit，只能是显示地转换，不能是隐式转换
    A c = (A)98; // corrent，只能显示地转换
    c.GetHeight();
    return 0;
}