#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Lotto(int total, int sel);


int main()
{
    std::vector<int> winner;
    winner = Lotto(51, 6);

    for(auto item: winner)
    {
        std::cout << item << " ";
    }

    return 0;
}

std::vector<int> Lotto(int total, int sel)
{
    std::vector<int> tempLot, result;
    for(int i = 1; i <= total; i++)
        tempLot.push_back(i);
    
    std::random_shuffle(tempLot.begin(), tempLot.end());

    result.assign(tempLot.begin(), tempLot.begin() + sel);    
    std::sort(result.begin(), result.end());
    return result;
}