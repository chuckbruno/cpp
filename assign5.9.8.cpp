#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>

#define ArSize 50


int main()
{
    char done[] = "done";
    int counter = 0;
    char ch;
    std::cout << "Enter words (to stop, type the word done): " << std::endl;

    std::cin.get(ch);

    char word[ArSize];
    memset(word, 0, sizeof(word));

    int index = 0;

    while(strcmp(done, word) != 0)
    {

        if (ch != ' ' && ch != '\n')
        {
            word[index] = ch;
            index += 1;
        }
        else
        {
            counter += 1;
            index = 0;
            memset(word, 0, sizeof(word));
        }

        std::cin.get(ch);

    }

    std::cout << "You entered a total of " << counter << " words" << std::endl;

    return 0;
}
