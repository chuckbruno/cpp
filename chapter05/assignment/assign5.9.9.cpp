#include <iostream>
#include <string>


int main()
{
    std::string done = "done";
    int counter = 0;

    std::cout << "Enter words (to stop, type the word done): " << std::endl;
    std::string sentence;
    std::string line;

    // get multi lines input
    // while (std::getline(std::cin, line) && !line.empty())
    // {
    //     sentence += line + " ";
    // }

    // do
    // {
    //     std::getline(std::cin, line);
    //     sentence += line + ' ';
    // }
    // while(!line.empty());
 
    // std::getline(std::cin, sentence);
    std::string word;
    int windex = 0;
    int sindex = 0;
    char ch;

    // while (sindex < sentence.length())
    // {
    //     ch = sentence.at(sindex);

    //     if (ch != ' ' && ch != '\n')
    //     {
    //         word.insert(index, 1, ch);
    //         std::cout << word << std::endl;
    //         index++;
    //     }

    //     else
    //     {
    //         if (word != done)
    //         {
    //             counter++;
    //         }

    //         index = 0;
    //         word.clear(); 
    //     }

    //     std::cout << ch << std::endl;
    //     sindex++;
    // }
    do
    {
        if (sindex == sentence.length() | sindex == 0)
        {
            // std::cin >> sentence;
            std::getline(std::cin, sentence);
            // std::cin(sentence);
            sindex = 0;
            windex = 0;
            word.clear();
            sentence += " ";
        }
        // for (int i = 0; i < sentence.length(); i++)
        // {
        //     ch = sentence.at(i);
        //     if (ch != ' ' && ch != '\n')
        //     {
        //          word.insert(index, 1, ch);
        //          std::cout << word << std::endl;
        //          index++;
        //     }
        //     else
        //     {
        //          counter++;
        //          index = 0;
        //          word.clear();
        //     }
     
        // }

        ch = sentence.at(sindex);
        // std::cout << ch << std::endl;

        if (ch != ' ' && ch != '\n')
        {
             word.push_back(ch);
             windex++;
        }
        else
        {
            if (!word.empty())
                counter++;
             windex = 0;
             word.clear();
        }

        ++sindex;
        // std::cout << word << std::endl;

        // std::cout << word.length() << std::endl;

    }
    while(word != done && sindex <= sentence.length());
    // while(word != done)
    // {
        
    //     ch = sentence[sindex];
    //     if (ch != ' ' && ch != '\n')
    //     {
    //          word.insert(index, 1, ch);
    //          std::cout << word << std::endl;
    //          index++;
    //     }
    //     else
    //     {
    //          counter++;
    //          index = 0;
    //          word.clear();
    //     }
 
    //     std::cout << ch << std::endl;
    //     sindex++;

    // }

    std::cout << "You entered a total of " << counter << " words" << std::endl;

    return 0;
}
