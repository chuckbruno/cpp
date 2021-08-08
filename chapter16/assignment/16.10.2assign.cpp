#include <iostream>
#include <string>
#include <cctype>


bool checkIsPalindromic(const std::string & word);
std::string ToLower(const std::string & word);

int main()
{
    std::string letters;
    std::cout << "Enter the word (quit to quit): ";
    while(getline(std::cin, letters) && letters != "quit")
    {

        std::string conWord = ToLower(letters);
        if(checkIsPalindromic(conWord))
        {
            std::cout << conWord << " is Palindromic word " << std::endl;
        }
        else
            std::cout << conWord << " is not Palindromic word " << std::endl;

        std::cout << "Enter next sequence (quit to quit): ";

    }

    std::cout << "Done.\n";
    return 0;

}


std::string ToLower(const std::string & word)
{
    std::string tempWord = word;
    std::string newWord;
    for(int i = 0; i < word.length(); i++)
    {
        if(std::isalpha(word[i]))
        {
            newWord.push_back((char)std::tolower(word[i]));
        }
    }

    return newWord;

}


bool checkIsPalindromic(const std::string & word)
{
    std::string tempWord = word;
    std::reverse(tempWord.begin(), tempWord.end());
    
    return word == tempWord;
}