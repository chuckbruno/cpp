#include <iostream>
#include <cstring>

struct CandyBar
{
    char name[50];
    double weight;
    int calorie;
};

void Show(const CandyBar& candybar);
void SetCandyBar(CandyBar& candybar, const char* name = "Millennium Munch", double weight = 2.85, int calorie = 350);


int main()
{
    CandyBar candy;

    SetCandyBar(candy, "Dabaidu", 3.45, 359);
    Show(candy);

    CandyBar candy1;
    SetCandyBar(candy1);
    Show(candy1);

    return 0;
}


void Show(const CandyBar& candybar)
{
    std::cout << "CandyBar name is: " << candybar.name << std::endl;
    std::cout << "weight is: " << candybar.weight << std::endl;
    std::cout << "calorie is: " << candybar.calorie << std::endl;
}


void SetCandyBar(CandyBar& candybar, const char* name, double weight, int calorie)
{
    strcpy(candybar.name, name);
    candybar.weight = weight;
    candybar.calorie = calorie;
}
