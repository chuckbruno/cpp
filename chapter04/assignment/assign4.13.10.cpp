#include <iostream>
#include <array>

int main()
{
    std::array<float, 3> data;
    std::cout << "Please input three times running record: " << std::endl;
    std::cin >> data[0] >> data[1] >> data[2];

    int times = data.size();
    float average = (data[0] + data[1] + data[2]) / times;
    std::cout << "All times: " << times << std::endl;
    std::cout << "Average records: " << average << std::endl;
    for(auto& item: data)
    {
        std::cout << item << std::endl;
    }

    return 0;
}

