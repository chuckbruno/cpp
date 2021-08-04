
#include <iostream>
#include <cstring>
#include "14.7.4assign.h"


const int SIZE = 5;


int main()
{

    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Person * lolas[SIZE];

    int ct;
    for(ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category: \n"
        << "g: gunslinger  p: pokerplayer  "
        << "t: BadDude   q: quit\n";

        cin >> choice;
        while(strchr("gptq", choice) == NULL)
        {
            cout << "Please enter a g, p, t, or q: ";
            cin >> choice;
        }

        if (choice == 'q')
            break;
        
        switch(choice)
        {
            case 'g': lolas[ct] = new Gunslinger;
                       break;
            case 'p': lolas[ct] = new PokerPlayer;
                       break;
            case 't': lolas[ct] = new BadDude;
                       break;

        }

        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nHere is your staff: \n";
    int i;
    for(i= 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

    for(i= 0; i < ct; i++)
        delete lolas[i];

    cout << "Bye.\n";

    return 0;

}