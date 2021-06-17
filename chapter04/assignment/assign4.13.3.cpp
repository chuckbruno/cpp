#include <iostream>
#include <cstring>


int main()
{
    char first_name[50];
    char last_name[50];

    // char combines_name[100];

    std::cout << "Enter your first name: ";
    std::cin.getline(first_name, 50);
    std::cout << "Enter your last name: ";
    std::cin.getline(last_name, 50);

    int first_name_len = strlen(first_name);
    int last_name_len = strlen(last_name);

    const int combinedSize = first_name_len + last_name_len + 3;

    char* cptr = new char[combinedSize];

    strcat(cptr, last_name);
    strcat(cptr, ", ");
    strcat(cptr, first_name);

    cptr[combinedSize] = '\0';

    std::cout << "Here's the information is a single string: " << cptr << std::endl;

    delete[] cptr;

    return 0;

}