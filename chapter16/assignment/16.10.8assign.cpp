#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{

    std::vector<std::string> result(15);
    std::vector<std::string> matFriends = { "Jack", "Jhon", "Tom", "Tim", "Bob" };
    std::vector<std::string> patFriends = {"Lily", "Lucy", "Bob", "Tom" };

    std::sort(matFriends.begin(), matFriends.end());
    std::sort(patFriends.begin(), patFriends.end());

    auto it = std::set_union(matFriends.begin(), matFriends.end(), patFriends.begin(), patFriends.end(), result.begin());                                               // 5 10 15 20 25 30 40 50  0  0
    result.resize(it - result.begin());

    for (auto it = result.begin(); it != result.end(); it++)
    {
        std::cout << *it << " ";
    }
    return 0;
}
