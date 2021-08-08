
#include <algorithm>
#include <iostream>
#include <vector>


template<typename T>
int reduce(T ar[], int n);


int main()
{
    long ar[6] = {12, 334, 12, 34, 12, 334};

    int num = reduce(ar, 6);
    std::cout << "num: " << num << std::endl;

    std::string ar1[7] = {"apple", "book", "cake", "duck", "book", "cake", "effect"};
    int num1 = reduce(ar1, 7);

    std::cout << "num1: " << num1 << std::endl;
    return 0;
}


template<typename T>
int reduce(T ar[], int n)
{
    std::vector<T> arVect(n);
    std::copy(ar, ar + n, arVect.begin());
    std::sort(arVect.begin(), arVect.end());
    auto it = std::unique(arVect.begin(), arVect.end());
    arVect.resize(std::distance(arVect.begin(), it));

    for(auto ptr = arVect.begin(); ptr != arVect.end(); ++ptr)
    {
        std::cout << *ptr << std::endl;
    }

    return arVect.size();
}