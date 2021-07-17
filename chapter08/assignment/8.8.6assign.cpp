#include <iostream>
#include <cstring>


template <typename T>
T maxn(T arr[], int num);

template<> const char* maxn<const char*>(const char* arr[], int num);


int main()
{
    int intArr[6] = {1, 4, 2, 6, 8, 9};
    double doubleArr[4] = {12.36, 95.2, 78.3, 11.3};

    int maxInt = maxn(intArr, 6);
    double maxDouble = maxn(doubleArr, 4);

    const char* charArr[5] = {"apple", "banana", "orange", "gape", "pear"};
    const char* maxLength = maxn(charArr, 5);

    std::cout << "maxInt: " << maxInt << std::endl;
    std::cout << "maxDouble: " << maxDouble << std::endl;

    std::cout << "maxLength string: " << maxLength << std::endl;

    return 0;
}


template <typename T>
T maxn(T arr[], int num)
{
    T temp = 0;
    for(int i = 0; i < num; i++)
    {
        if (arr[i] > temp)
            temp = arr[i];
    }

    return temp;
}

template<> const char* maxn<const char*>(const char* arr[], int num)
{
    const char * charPtr = arr[0];
    for(int i = 0; i < num; i++)
    {
        std::cout << arr[i] << std::endl;
        if (strlen(arr[i]) > strlen(charPtr))
        {
            std::cout << arr[i] << std::endl;
            charPtr = arr[i];
        }
    }

    return charPtr;
}
