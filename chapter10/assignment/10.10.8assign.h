#ifndef LIST_H_
#define LIST_H_

class List
{
private:
    enum {MAX = 10};
    int items[MAX];
    int index;
public:
    List();
    bool isempty() const;
    bool isfull() const;
    bool append(int item);
    void visit(void (*pf)(int &));
};

#endif