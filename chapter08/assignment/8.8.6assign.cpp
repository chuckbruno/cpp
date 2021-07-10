#include <iostream>
#include <cstring>


template <typename T>
T maxn(T arr[], int num);

template<>  const char* maxn< const char*>( const char* arr[], int num);


int main()
{
    int intArr[6] = {1, 4, 2, 6, 8, 9};
    double doubleArr[4] = {12.36, 95.2, 78.3, 11.3};

    int maxInt = maxn(intArr, 6);
    double maxDouble = maxn(doubleArr, 4);

    char str1[6] = {'a', 'p', 'p', 'l', 'e'};
    char str2[7] = {'b', 'a', 'n', 'a'};
    // char str3[7] = {'o', 'r', 'a', 'n', 'g', 'e'};
    // char str4[11] = {'o', 'r', 'a', 'n', 'g', 'e', 'g', 'e', 'h', 'i'};


    // char * str2 = "banana";
    // char * str3 = "orange";
    // char * str4 = "gape";
    // char * str5 = "pear";

    const char* charArr[5] = {"apple", "banan", "orange", "gape", "pear"};
    // char* charArr[4] = {str1, str2};
    const char* maxLength = maxn(charArr, 5);

    std::cout << "maxInt: " << maxInt << std::endl;
    std::cout << "maxDouble: " << maxDouble << std::endl;

    std::cout << "maxLength string: " << maxLength << std::endl;

    return 0;
}


template <typename T>
T maxn(T arr[], int num)
{
    T temp = arr[0];
    for(int i = 1; i < num; i++)
    {
        if (arr[i] > temp)
            temp = arr[i];
    }

    return temp;
}

template<>  const char* maxn< const char*>( const char* arr[], int num)
{
    const char * ptr = arr[0];
    for(int i = 0; i < num ; i++)
    {
        if (strlen(arr[i]) > strlen(ptr))
        {
            ptr = arr[i];
        }
    }

    return ptr;
}
