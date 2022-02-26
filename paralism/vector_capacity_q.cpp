#include <vector>
#include <iostream>

int main()
{
    size_t n = 1 << 5;

    std::vector<float> p;
    std::vector<float *> pa;

    for(size_t i = 0; i < n; ++i)
    {
        p.push_back(i);
        pa[i] = &p.back();
    }

    for(size_t i = 0; i < n; ++i)
    {
        std::cout << (&p[i] == pa[i]) << ' ';

    }
    std::cout << std::endl;

    return 0;
}


