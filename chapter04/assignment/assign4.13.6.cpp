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
    CandyBar* candyBarArray[3];

    candyBarArray[0] = new CandyBar{"Dabaitu", 2.3, 450};
    candyBarArray[1] = new CandyBar{"Xufuji", 4.5, 390};
    candyBarArray[2] = new CandyBar{"Mocha Munch", 3.3, 490};

    std::cout << candyBarArray[0]->brand << std::endl;
    std::cout << candyBarArray[0]->weight << std::endl;
    std::cout << candyBarArray[0]->calorie << std::endl;

    std::cout << candyBarArray[1]->brand << std::endl;
    std::cout << candyBarArray[1]->weight << std::endl;
    std::cout << candyBarArray[1]->calorie << std::endl;

    std::cout << candyBarArray[2]->brand << std::endl;
    std::cout << candyBarArray[2]->weight << std::endl;
    std::cout << candyBarArray[2]->calorie << std::endl;

    return 0;

}

