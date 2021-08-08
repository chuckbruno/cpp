#include <iostream>
#include <string>
#include <cctype>


bool checkIsPalindromic(const std::string & word);

int main()
{
    std::string letters;
    std::cout << "Enter the word (quit to quit): ";
    while(std::cin >> letters && letters != "quit")
    {

        if(checkIsPalindromic(letters))
            std::cout << letters << " is Palindromic word " << std::endl;
        else
            std::cout << letters << " is not Palindromic word " << std::endl;

        std::cout << "Enter next sequence (quit to quit): ";

    }

    std::cout << "Done.\n";
    return 0;

}

bool checkIsPalindromic(const std::string & word)
{
    std::string tempWord = word;
    std::reverse(tempWord.begin(), tempWord.end());
    
    return word == tempWord;
}