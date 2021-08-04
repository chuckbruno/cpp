
#include <iostream>
#include <cstring>
#include "14.7.3workermi.h"
#include "14.7.3queuetp.h"


const int SIZE = 5;


int main()
{

    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    // Worker * lolas[SIZE];
    Queue<Worker *> lolas(SIZE);

    int ct;
    for(ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category: \n"
        << "w: waiter  s: signer  "
        << "t: singing waiter   q: quit\n";

        cin >> choice;
        while(strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }

        if (choice == 'q')
            break;

        Worker * tempWPtr = nullptr;
        switch(choice)
        {
            case 'w': 
                    tempWPtr = new Waiter;
                    lolas.enqueue(tempWPtr);
                    break;
            case 's': 
                    tempWPtr = new Singer;
                    lolas.enqueue(tempWPtr);
                    break;
            case 't': 
                    tempWPtr = new SingerWaiter;
                    lolas.enqueue(tempWPtr);
                    break;
        }

        cin.get();
        tempWPtr->Set();
    }

    cout << "\nHere is your staff: \n";
    int i;
    Worker * tempPtr = nullptr;
    for(i= 0; i < ct; i++)
    {
        cout << endl;
        lolas.dequeue(tempPtr);
        tempPtr->Show();
    }


    for(i= 0; i < ct; i++)
        lolas.dequeue(tempPtr);
        delete tempPtr;

    cout << "Bye.\n";

    return 0;
}