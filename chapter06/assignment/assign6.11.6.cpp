#include <iostream>
#include <string>

struct patron
{
    std::string name;
    double donation;
};


const int Maxnum = 5;

int main()
{

    patron* patrons[Maxnum];
    int i = 0;
    int larger[Maxnum];
    int mid[Maxnum];
    std::cout << "Input patron name and donation: " << std::endl;
    while(i < Maxnum)
    {
        patron* paPtr = new patron;
        std::cin >> paPtr->name >> paPtr->donation;

        i++;

    }
    std::cout << "Grand Patrons" << std::endl;
    for(int i =0; i < Maxnum; i++)
    {
        if (patrons[i]->donation > 10000){
            std::cout << patrons[i]->name << ": " << patrons[i]->donation << std::endl;
        }
    }
    std::cout << "Patronse" << std::endl;
    for(int i=0; i < Maxnum; i++)
    {
        if(patrons[i]->donation < 10000)
        {
            std::cout << patrons[i]->name << ": " << patrons[i]->donation << std::endl;
        }
    }

    return 0;

}
