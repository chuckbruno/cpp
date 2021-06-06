#include <string>
#include <iostream>
#include <algorithm>


template <class T>
inline
const T& minjiao(const T& a, const T& b)
{
    return b < a ? b : a;
}

int main(){

    auto re = std::max(std::string("zoo"), std::string("hello"));
    auto jj = minjiao(45, 67);
    std::cout << jj << std::endl;
    std::cout << re << std::endl;
}


