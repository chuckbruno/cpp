#include <iostream>
#include <vector>
#include <ctime>
#include <list>


int main()
{

    const int NUM = 10000000;
    std::vector<int> vi0(NUM);
    for(int i = 0; i < NUM; i++)
    {
        vi0.push_back(std::rand());
    }

    std::vector<int> vi(vi0);
    std::list<int> li(vi0.begin(), vi0.end());

    clock_t start = std::clock();
    std::sort(vi.begin(), vi.end());
    clock_t end = std::clock();
    std::cout << "Sort vector consumed: " << (double)(end - start) / CLOCKS_PER_SEC;

    std::cout << std::endl;
    clock_t start1 = std::clock();
    li.sort();
    clock_t end1 = std::clock();
    std::cout << "Sort list consumed: " << (double)(end1 - start1) / CLOCKS_PER_SEC;

    std::sort(vi0.begin(), vi0.end());

    std::copy(vi0.begin(), vi0.end(), li.begin());

    std::cout << std::endl;

    clock_t start2 = std::clock();
    std::copy(li.begin(), li.end(), vi.begin());
    std::sort(vi.begin(), vi.end());
    std::copy(vi.begin(), vi.end(), li.begin());
    clock_t end2 = std::clock();

    std::cout << "Copy and Sort consumed: " << (double)(end2 - start2) / CLOCKS_PER_SEC << std::endl;

    return 0;
}