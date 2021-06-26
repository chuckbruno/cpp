#include <iostream>
#include <cctype>


int main()
{
    std::cout << "Enter words (q to quit)" << std::endl;
    const int Size = 50;
    char ch;
    char word[Size];
    int index = 0;
    int others = 0;
    int voel = 0;
    int constant = 0;
    memset(word, 0, sizeof(word));
    std::cin  >> ch;
    while (ch != 'q')
    {
        if (ch != ' ' && ch != '\n')
        {
            word[index] = ch;
            index += 1;
        }
        else
        {
            std::cout << word << std::endl;
            index = 0;
            if(isalpha(word[0]))
            {
                if (word[0] == 'a' | word[0]  == 'o' | word[0] == 'e'| word[0] == 'i'| word[0] == 'u')
                {
                    voel += 1;
                }
                else{
                    constant += 1;
                }
            }
            else
            {
                others += 1;
            }

            memset(word, 0, sizeof(word));
        }

        std::cin.get(ch);
    }

    std::cout << voel << " words beginning with vowels" << std::endl;
    std::cout << constant << " words beginngin with consonants" << std::endl;

    std::cout << others << " others" << std::endl;

    return 0;
}
