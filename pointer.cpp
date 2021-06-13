#include <iostream>


int main()
{

    using namespace std;
    int updates = 6;
    int* p_updates;

    int* p1, p2;

    p1 = &updates;
    p2 = 200;

    p_updates = &updates;

    cout << "p2: " << p2 << endl;
    cout << "Values: updates = " << updates;
    cout << ", *updates = " << *p_updates << endl;

    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;

}
