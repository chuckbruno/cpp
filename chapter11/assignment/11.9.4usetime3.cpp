#include <iostream>
#include "11.9.4mytime3.h"


int main()
{
    Time planning;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time total;

    std::cout << "Aida and Tosca:" << std::endl;
    std::cout << aida << ": " << tosca << std::endl;

    total = aida + tosca;
    std::cout << "Aida + Tosca: " << total << std::endl;

    total = aida * 1.17;
    std::cout << "Aida * 1.17: " << total << std::endl;
    std::cout << "10.0 * Tosca: " << 10.0 * tosca << std::endl;

    return 0;

}
