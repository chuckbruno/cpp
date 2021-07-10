#include <iostream>
#include <string>

void strcount(std::string);


int main()
{
    std::cout << "Enter a line: " << std::endl;

    std::string tempString;
    std::getline(std::cin, tempString);

    while(tempString != "")
    {
        strcount(tempString);

        std::cout << "Enter next line (empty line to quit): " << std::endl;
        std::getline(std::cin, tempString);

    }

    std::cout << "Bye" << std::endl;
    return 0;
}


void strcount(std::string str)
{
    static int total = 0;
    int count = 0;

    std::cout << "\"" << str << "\" contains ";

    for(int i = 0; i < str.length(); i++)
    {
        if (str[i])
            count++;
    }

    total += count;

    std::cout << count << " characters " << std::endl;
    std::cout << total << " characters total " << std::endl;
}
