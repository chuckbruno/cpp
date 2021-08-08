#ifndef DEQUE_H__
#define DEQUE_H__
#include <cstdlib>
#include <ctime>

class Customer
{
    private:
        long arrive;
        int processtime;
    public:
        Customer(){arrive = processtime = 0;}
        void set(long when);
        long when() const {return arrive; }
        int ptime() const {return processtime; }
};


void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}


#endif