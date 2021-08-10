#include <iostream>

int main()
{
    int temperature = 63;
    std::cout << "Today's water temperature: ";
    std::cout.setf(std::ios_base::showpos);
    std::cout << temperature << std::endl;

    std::cout << "For our programming friends, that's\n";
    std::cout << std::hex << temperature << std::endl;

    std::cout.setf(std::ios_base::uppercase);
    std::cout.setf(std::ios_base::showpos);

    std::cout << "or\n";
    std::cout << temperature << std::endl;
    std::cout << "How" << true << "! oops -- How ";
    std::cout.setf(std::ios_base::boolalpha);

    std::cout << true << "!\n";

    return 0;
}
