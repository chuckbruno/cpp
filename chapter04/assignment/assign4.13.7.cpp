#include <iostream>
#include <string>


struct Pizza
{
    /* data */
    std::string company;
    float diameter;
    float weight;
};


int main()
{
    Pizza pizza1;
    std::cout << "Input company name: ";
    std::cin >> pizza1.company;

    std::cout << "Input diameter: ";
    std::cin >> pizza1.diameter;

    std::cout << "Input weight: ";
    std::cin >> pizza1.weight;

    std::cout << "This pizza info: " << pizza1.company << " " << pizza1.diameter << " " << pizza1.weight << std::endl;

    return 0;

}
