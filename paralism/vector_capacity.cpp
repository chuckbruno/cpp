#include <iostream>
#include <vector>


int main()
{
    std::vector<int>::size_type sz;

    std::vector<int> foo;
    sz = foo.capacity();

    std::cout << "making foo grow: " << std::endl;
    for(int i = 0; i < 100; ++i)
    {
        foo.push_back(i);
        if(sz != foo.capacity())
        {
            sz = foo.capacity();
            std::cout << "capacity changed: " << sz << std::endl;
        }
    }

    std::vector<int> bar;
    sz = bar.capacity();
    bar.reserve(100);
    std::cout << "making bar grow: " << std::endl;
    for(int i = 0; i < 100; ++i)
    {
        bar.push_back(i);
        if(sz != bar.capacity())
        {
            sz = bar.capacity();
            std::cout << "capacity changed: " << sz << std::endl;
        }
    }
    return 0;
}
