#include "12.10.4assign.h"

Stack::Stack(int n)
{
    pitems = new Item[n];
    top = 0;
}


Stack::Stack(const Stack & st)
{
    pitems = new Item[st.top];
    for (int i = 0; i < st.top; i++)
    {
        pitems[i] = st.pitems[i];
    }
    top = st.top;
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
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}


bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
        return false;
}

Stack & Stack::operator=(const Stack & st)
{
    pitems = new Item[st.top];
    for (int i = 0; i < st.top; i++)
    {
        pitems[i] = st.pitems[i];
    }

    top = st.top;

    return *this;
}


Stack::~Stack()
{
    delete[] pitems;
}


std::ostream & operator<<(std::ostream & os, Stack & st)
{
    for (int i = 0; i < st.top; i++)
    {
        os << st.pitems[i] << " ";
    }

    return os;
}


