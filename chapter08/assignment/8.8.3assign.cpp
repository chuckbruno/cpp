#include <iostream>
#include <string>


void convertToUpper(const std::string& name);


int main()
{
    std::string name;
    std::cout << "Enter a string (q to quit): ";
    getline(std::cin, name);

    while(name != "q")
    {

        convertToUpper(name);
        std::cout << "Next string (q to quit): ";
        getline(std::cin, name);
    }

    std::cout << "Bye." << std::endl;

}


void convertToUpper(const std::string& name)
{
    for(int i = 0; i < name.length(); i++)
    {
        std::cout << (char)toupper(name[i]);

    }
    std::cout << std::endl;
}
