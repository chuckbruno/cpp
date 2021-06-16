#include <iostream>
#include <string.h>
#include <stdio.h>


int main()
{
    char word[50];
    char done[] = "done";
    int counter = 0;

    std::cout << "Enter words (to stop, type the word done): " << std::endl;

    while(strcmp(done, word) != 0)
    {
        std::cin.getline(word, 50);
        counter += 1;
    }

    std::cout << "You entered a total of " << counter << " words" << std::endl;
}
