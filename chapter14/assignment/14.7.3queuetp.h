#ifndef QUEUETP_H
#define QUEUETP_H


template<typename T>
class Queue
{
    private:
        enum {Q_SIZE = 10};
        struct Node {T item; struct Node * next;};
        Node * front;
        Node * rear;
        int items;
        const int qsize;
        Queue(const Queue & q): qsize(0) {}
        Queue & operator=(const Queue & q) { return *this; }
    public:
        Queue(int qs = Q_SIZE);
        ~Queue();
        bool isempty() const;
        bool isfull() const;
        int queuecount() const;
        bool enqueue(const T & item);
        bool dequeue(T & item);
};


template<typename T>
Queue<T>::Queue(int qs): qsize(qs) 
{
    front = rear = nullptr;
}


template<typename T>
Queue<T>::~Queue()
{
    Node * temp;
    while(front != nullptr)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}


template<typename T>
bool Queue<T>::isempty() const
{
    return items == 0;
}


template<typename T>
bool Queue<T>::isfull() const
{
    return items == qsize;
}

template<typename T>
int Queue<T>::queuecount() const
{
    return items;
}


template<typename T>
bool Queue<T>::enqueue(const T & item)
{
    if(isfull())
        return false;

    Node * add = new Node;
    add->item = item;
    add->next = nullptr;
    items++;
    if(front == nullptr)
        front = add;
    else
        rear->next = add;

    rear = add;
    return true;
}

template<typename T>
bool Queue<T>::dequeue(T & item)
{
    if(front == nullptr)
        return false;

    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = nullptr;

    return true;
}
#endif