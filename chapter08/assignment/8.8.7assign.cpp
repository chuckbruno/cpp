#include <iostream>


template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);


template <typename T>
T SumArray(T arr[], int n);


template <typename T>
T SumArray(T * arr[], int n);


struct debts
{
    char name[50];
    double amount;
};


int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[3];

    for (int i= 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }

    cout << "Listing Mr. E's counts of things" << endl;
    ShowArray(things, 6);

    cout << "Listing Mr. E's debts" << endl;

    ShowArray(pd, 3);

    int thingSum =  SumArray(things, 6);
    cout << "Sum of things " << thingSum <<  endl;

    double pdSum = SumArray(pd, 3);
    cout << "Sum of debts " << pdSum <<  endl;
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "template A" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;

}


template <typename T>
void ShowArray(T * arr[], int n)
{
    using namespace std;
    cout << "template B" << endl;

    for(int i =0; i < n; i++)
    {
        cout << *arr[i] << ' ';

    }
    cout << endl;
}


template <typename T>
T SumArray(T arr[], int n)
{
    T temp = arr[0];
   for ( int i =1; i < n; i++ )
   {
       temp  += arr[i];
   }

   return temp;
}


template <typename T>
T SumArray(T *arr[], int n)
{
    T temp  = *arr[0];
    for(int i =1; i < n; i++)
    {
        temp += *arr[i];
    }

    return temp;
}
