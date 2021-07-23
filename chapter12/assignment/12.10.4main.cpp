#include <iostream>
#include <cctype>
#include "12.10.4assign.h"


int main()
{
    using namespace std;
    Stack st(20);
    char ch;

    unsigned long po;
    cout << "Please enter A to add a purchase order, \n"
        << "P to process a PO, or Q to quit.\n";

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                      cin >> po;
                      if (st.isfull())
                          cout << "stack already full\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "stack already empty\n";
                      else
                      {
                          st.pop(po);
                          cout << "PO #" << po << " popped\n";
                      }
                      break;

        }
        cout << "Please enter A to add a purchase order. \n"
            << "p to process a PO, or Q to quit.\n";
    }

    Stack st2(st);
    cout << st2 << endl;

    Stack st3 = st2;
    cout << st3 << endl;
    cout << "Bye\n";
    return 0;
}
