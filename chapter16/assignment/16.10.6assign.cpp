#include <iostream>
#include <deque>
#include "16.10.6assign.h"


typedef Customer Item;

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    std::srand(std::time(0));

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";

    int qs;
    cin >> qs;
    std::deque<Item> line;
    // Queue line(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;

    long cyclelimit = MIN_PER_HR * hours;
    cout << "Enter the average number of customers per hour: ";

    double perhour;
    cin >> perhour;

    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;

    int wait_time = 0;
    long line_wait = 0;

    for(int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if(newcustomer(min_per_cust))
        {
            if(line.size() == qs)
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);
                line.push_back(temp);
            }
        }

        if (wait_time <=0 && line.size() != 0)
        {
            temp = line.front();
            line.pop_front();
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }

        if(wait_time > 0)
            wait_time--;
        sum_line += line.size();
    }

    if(customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways:" << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: " << (double)line_wait / served << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";


    return 0;
}


bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
