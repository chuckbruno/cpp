#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>
#include <fstream>

using std::string;
// const int NUM = 26;

// const string wordlist[NUM] = {"apiary", "beetle", "cereal"
//         "danger", "ensign", "florid", "garage", "health", "insult",
//         "jackal", "keeper", "loaner", "manage", "nonce", "onset",
//         "plaid", "quilt", "remote", "stolid", "train", "useful",
//         "valid", "whence", "xenon", "yearn", "zippy"};


std::vector<std::string> hookWords();


int main()
{
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;
    std::srand(std::time(0));

    std::vector<std::string> wordlist = hookWords();
    int NUM = wordlist.size();

    char play;
    cout << "Will you play a word game? <y/n>";
    cin >> play;

    play = tolower(play);
    while(play == 'y')
    {
        string target = wordlist[std::rand() % NUM];

        cout << "Word is: " << target << endl;
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word, It has " << length << " letters, and you guess\n" << "one letter at a time, You get " << guesses << " wrong guess.\n";

        cout << "Your word: " << attempt << endl;
        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if(badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout << "You already guessed that. Try again.\n";
                continue;
            }

            int loc = target.find(letter);
            if(loc == string::npos)
            {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter;
            }
            else
            {
                cout << "Good guess!\n";
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while(loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }

            cout << "Your word: " << attempt << endl;
            if(attempt != target)
            {
                if(badchars.length() > 0)
                    cout << "Bad choice: " << badchars << endl;
                cout << guesses << " bad guesses left\n";
            }
        }

        if(guesses > 0)
            cout << "That's right\n";
        else
            cout << "Sorry, the word is " << target << ".\n";
        cout << "Will you play another? <y/n>";
        cin >> play;
        play = tolower(play);
    }

    cout << "Bye\n";
    return 0;
}


std::vector<std::string> hookWords()
{
    std::string tempWord;
    std::vector<std::string> fileWords;

    std::ifstream inFile("data.txt");
    while(inFile >> tempWord)
        fileWords.push_back(tempWord);

    for(auto ptr = fileWords.begin(); ptr != fileWords.end(); ptr++)
    {
        std::cout << *ptr << " ";
    }

    std::cout << std::endl;
    int count = fileWords.size();

    std::cout << "file has " << count << " words" << std::endl;
    inFile.close();

    return fileWords;
}
