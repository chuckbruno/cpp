#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int ct1 = 0;

    cin >> ch;
    while(ch != 'q')
    {
        ct1++;
        cin >> ch;
    }

    int ct2 = 0;
    cin.get(ch);
    while(ch != 'q')
    {
        ct2++;
        cin.get(ch);
    }

    cout << "ct1 = " << ct1 << "; ct2 = " << ct2 << "\n";
    return 0;
}
