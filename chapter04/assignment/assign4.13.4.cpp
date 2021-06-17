#include <iostream>
#include <string>

int main()
{
    std::string first_name;
    std::string last_name;

    std::string combinedName;

    std::cout << "Enter your first name: ";
    std::cin >> first_name;
    std::cout << "Enter your last name: ";
    std::cin >> last_name;

    combinedName.append(last_name);
    combinedName.append(", ");
    combinedName.append(first_name);

    std::cout << "Here's the information is a single string: " << combinedName << std::endl;

    return 0;


}
