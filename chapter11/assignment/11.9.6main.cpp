#include "11.9.6stonewt.h"
#include <iostream>


int main()
{
    Stonewt incognito(23.63);
    Stonewt wolfe(56.21);
    Stonewt taft(89.56);

    Stonewt eleven(11);

    Stonewt stonewtArr[6];
    stonewtArr[0] = incognito;
    stonewtArr[1] = wolfe;
    stonewtArr[2] = taft;

    std::cout << "Enter pounds for the last three members: " << std::endl;

    for(int i = 3; i < 6; i++)
    {
        double inputPounds;
        std::cout << "#" << i << " value: ";
        std::cin >> inputPounds;
        Stonewt tempEle = inputPounds;
        stonewtArr[i] = tempEle;
    }

    Stonewt smallest = stonewtArr[0];
    Stonewt largest = stonewtArr[0];

    for(int i = 0; i < 6; i++)
    {
        if (stonewtArr[i] > largest)
        {
            largest = stonewtArr[i];
        }

        if(stonewtArr[i] < smallest)
        {
            smallest = stonewtArr[i];
        }

        std::cout << stonewtArr[i] << std::endl;
    }

    std::cout << "The largest is: " << largest << std::endl;
    std::cout << "The smallest is: " << smallest << std::endl;

    int count = 0;
    for(int i = 0; i < 6; i++)
    {
        if (stonewtArr[i] >= eleven)
        {
            count += 1;
        }
    }

    std::cout << "The number of all memebers larger than 11 pounds is: " << count << std::endl;

    return 0;

}
