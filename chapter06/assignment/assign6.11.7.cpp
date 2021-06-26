#include <iostream>
#include <cctype>
#include <string>

int main()
{
    std::cout << "Enter words (q to quit)" << std::endl;
    int others = 0;
    int vowels = 0;
    int consonants = 0;
    std::string words;
    // memset(word, 0, sizeof(word));
    while(std::cin >> words, words.size() > 1 && words != "q")
    {
        std::cout << words << std::endl;
        if(isalpha(words[0]))
        {
            if (words[0] == 'a' || words[0]  == 'o' || words[0] == 'e'|| words[0] == 'i'|| words[0] == 'u')
            {
                vowels += 1;
            }
            else{
                consonants += 1;
            }
        }
        else
        {
            others += 1;
        }    
    }
    // while (strlen(word) > 1 && word[0] != 'q')
    // {
    //     if (ch != ' ' && ch != '\n')
    //     {
    //         word[index] = ch;
    //         index += 1;
    //     }
    //     else
    //     {
    //         word[index] = '\0';
    //         std::cout << word << std::endl;
    //         index = 0;
    //         if(isalpha(word[0]))
    //         {
    //             if (word[0] == 'a' || word[0]  == 'o' || word[0] == 'e'|| word[0] == 'i'|| word[0] == 'u')
    //             {
    //                 vowels += 1;
    //             }
    //             else{
    //                 consonants += 1;
    //             }
    //         }
    //         else
    //         {
    //             others += 1;
    //         }

    //         // memset(word, 0, sizeof(word));
    //     }
    //     std::cin.get(ch);

    // }

    std::cout << vowels << " words beginning with vowels" << std::endl;
    std::cout << consonants << " words begining with consonants" << std::endl;

    std::cout << others << " others" << std::endl;

    return 0;
}
