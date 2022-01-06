#include <map>
#include <iostream>


int main()
{
    const std::map<int, std::string> coins{
        {10, "dime"},
            {100, "dollar"},
            {5, "half dollar"},
            {25, "quarter"},
    };

    for(auto it = coins.crbegin(); it != coins.crend(); ++it)
    {
        std::cout << it->second << " = $ " << it->first << std::endl;
    }

    return 0;
}
