#include "10.10.8assign.h"
#include <iostream>

void traverse(int &item);

int main(){
    List list1;
    list1.append(89);
    list1.append(23);

    std::cout << list1.isempty() << std::endl;
    std::cout << list1.isfull() << std::endl;

    list1.visit(traverse);

    return 0;
}


void traverse(int & item)
{
    std::cout << item << std::endl;
}