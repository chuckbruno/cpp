#include "10.10.5assign.h"
#include <iostream>

Stack::Stack()
{
    top = 0;
}


bool Stack::isempty() const
{
    return top == 0;
}


bool Stack::isfull() const
{
    return top == MAX;
}


bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}


bool Stack::pop()
{
    static double totalPayment = 0;

    if (top > 0)
    {
        std::cout << top-- << std::endl;
        totalPayment += items[top].payment;

        std::cout << "Total payment is: " << totalPayment << std::endl;
        return true;
    }
    else
        return false;
}




