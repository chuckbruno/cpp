#include <iostream>
#include <string>


struct Car
{
    std::string make;
    int year;
};


int main()
{
    int carNum;
    std::cout << "How many cars do you wish to catalog? ";
    (std::cin >> carNum).get();

    Car* carPtr = new Car[carNum];


    for (int i = 0; i < carNum; i++)
    {
        std::cout << "Car #" << i + 1 << ":" <<std::endl;
        std::cout << "Please enter the make: ";
        std::getline(std::cin, (carPtr + i)->make);

        std::cout << "Please enter the year made: ";
        (std::cin >> (carPtr + i)->year).get();

    }

    std::cout << "Here is your collection: " << std::endl;

    for (int j = 0; j < carNum; j++)
    {
        std::cout << carPtr[j].year << " " << carPtr[j].make << std::endl;
    }

    return 0;

}
