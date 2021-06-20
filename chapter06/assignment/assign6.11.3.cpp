#include <iostream>


void showmenu();


using namespace std;


int main()
{
    showmenu();

    char choice;
    cin >> choice;

    while (choice != 'f')
    {
        cout << "Please enter c, p, t, or g: \n";

        switch(choice)
        {
            case 'c':
                cout << "\a\n";
                break;
            case 'p':
                cout << "Langlang is a pianist\n";
                break;
            case 't':
                cout << "A maple is a tree\n";
                break;
            case 'g':
                cout << "Yuanshen is a game\n";
                break;
            default:
                cout << "That's not a choice" << endl;
        }
        showmenu();
        cin >> choice;
    }

    cout << "Bye\n";
    return 0;
}

void showmenu()
{
    cout << "Please enter c, p, t, g: \n"
    "c) carnivore               p) pianist\n"
    "t) tree                    g) game\n"
    "f\n";
}
