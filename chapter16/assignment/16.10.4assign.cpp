
#include <algorithm>
#include <iostream>
#include <vector>


int reduce(long ar[], int n);


int main()
{
    long ar[6] = {12, 334, 12, 34, 12, 334};

    int num = reduce(ar, 6);

    std::cout << "num: " << num << std::endl;
    return 0;
}


int reduce(long ar[], int n)
{
    std::vector<long> arVect(n);
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