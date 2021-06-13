#include <iostream>
#include <string>

struct CandyBar
{
    std::string brand;
    float weight;
    int calorie;
    /* data */

};


int main()
{
    CandyBar snack;
    snack.brand = "Mocha Munch";
    snack.weight = 2.3;
    snack.calorie = 350;

    CandyBar* ptrCandy = new CandyBar;

    ptrCandy->brand = "Chuck";
    ptrCandy->weight = 4.5;
    ptrCandy->calorie = 450;

    std::cout << snack.brand << std::endl;
    std::cout << snack.weight << std::endl;
    std::cout << snack.calorie << std::endl;

    std::cout << ptrCandy->brand << std::endl;
    std::cout << ptrCandy->weight << std::endl;
    std::cout << ptrCandy->calorie << std::endl;

}