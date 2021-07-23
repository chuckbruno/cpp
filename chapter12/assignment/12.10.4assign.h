
#ifndef STACK_H
#define STACK_H
#include <iostream>
typedef unsigned long Item;

class Stack
{
    private:
        enum {MAX = 10};
        Item * pitems;
        int top;
    public:
        Stack(int n = MAX);
        Stack(const Stack & st);
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item& item);
        bool pop(Item & item);
        Stack & operator=(const Stack & st);
        friend std::ostream & operator<<(std::ostream & os, Stack & st);
};

#endif
