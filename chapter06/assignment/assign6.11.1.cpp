#include <iostream>
#include <cctype>


int main()
{
    char ch;
    std::cout << "Enter text, and type @ to terminate input \n";
    std::cin.get(ch);

    while(ch != '@')
    {
        if (isdigit(ch))
        {
            std::cin.get(ch);
            continue;
        }
        else if (isalpha(ch))
        {
            if (islower(ch))
            {
                std::cout << (char)toupper(ch);
            }
            else if (isupper(ch))
            {
                std::cout << (char)tolower(ch);
            }
        }
        std::cin.get(ch);
    }

    return 0;

}
