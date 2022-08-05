#include <string>
#include <string_view>
#include <iostream>


int main()
{
    std::string s1 = "hello";
    std::string s2 = s1;
    std::string_view sv1 = s1;
    std::string_view sv2 = sv1;
    std::cout << "string" << s2 << std::endl;

    std::cout << "s1=" << s1 << std::endl;
    std::cout << "s2=" << s2 << std::endl;
    std::cout << "sv1=" << sv1 << std::endl;
    std::cout << "sv2=" << sv2 << std::endl;
    s1[0] = 'B';
    std::cout << "altered: " << std::endl;
    std::cout << "s1=" << s1 << std::endl;
    std::cout << "s2=" << s2 << std::endl;
    std::cout << "sv1=" << sv1 << std::endl;
    std::cout << "sv2=" << sv2 << std::endl;
    return 0;
}
