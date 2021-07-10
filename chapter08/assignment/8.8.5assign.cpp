#include <iostream>

template <typename T>
T max5(T arr[5]);


int main()
{
    int intArr[5] = {1, 95, 35, 68, 15};
    double doubleArr[5] = {56.95, 96.42, 53.12, 84.464, 93.224};

    int intMax = max5(intArr);
    double doubleMax = max5(doubleArr);


    std::cout << "max int is: " << intMax << std::endl;
    std::cout << "max double is: " << doubleMax << std::endl;

    return 0;
}


template <typename T>
T max5(T arr[5])
{
    T temp = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > temp)
            temp = arr[i];
    }

    return temp;
}
