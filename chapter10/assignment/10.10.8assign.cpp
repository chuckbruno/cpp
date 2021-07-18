#include "10.10.8assign.h"
#include <iostream>


List::List(){
    index = 0; //
}


bool List::isempty() const
{
    return index == 0;
}


bool List::isfull() const
{
    return index == MAX;
}

bool List::append(int item)
{
    if (index < MAX)
    {
        items[index++] = item;
        return true;
    }
    else
    {
        return false;
    }
}

void List::visit(void (*pf)(int &))
{
    for(int i= 0; i < index; i++)
    {
        pf(items[i]);
    }
}
