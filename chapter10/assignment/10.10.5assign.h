#ifndef STACK_H
#define STACK_H


struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
    private:
        static double totalPayment;
        enum {MAX = 10};
        Item items[MAX];
        int top;
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item& item);
        bool pop();
};

#endif
