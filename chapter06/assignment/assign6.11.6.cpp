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

    int i = 0;
    int num;
    std::cout << "Enter the donation num: " << std::endl;
    std::cin >> num;

    patron** parPtr = new patron*[num];
    std::cout << "Input patron name and donation: " << std::endl;
    while(i < num)
    {
        patron* paPtr = new patron();
        std::cin >> paPtr->name >> paPtr->donation;

        parPtr[i] = paPtr;
        i++;

    }
    std::cout << "Grand Patrons: " << std::endl;
    int check = 0;
    for(int i =0; i < num; i++)
    {
        if (parPtr[i]->donation > 10000){
            std::cout << parPtr[i]->name << ": " << parPtr[i]->donation << std::endl;
            check += 1;
        }
    }

    if (check == 0)
    {
        std::cout << "None" << std::endl;
    }

    check = 0;
    std::cout << "Patrons: " << std::endl;
    for(int i=0; i < num; i++)
    {
        if(parPtr[i]->donation < 10000)
        {
            std::cout << parPtr[i]->name << ": " << parPtr[i]->donation << std::endl;
            check += 1;
        }
    }
    if (check == 0)
        std::cout << "None" << std::endl;

    for(int i = 0; i < num; i++)
    {
        delete parPtr[i];
    }

    delete[] parPtr;
    return 0;

}
