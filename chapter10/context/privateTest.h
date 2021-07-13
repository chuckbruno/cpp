#include <iostream>


class Book
{
    public:
        int num = 10;

        void show() const;

};


void Book::show() const
{
    num = 100;
    std::cout << num << std::endl;
}


