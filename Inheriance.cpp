#include <iostream>
#include <string>

class Base{

public:
    Base(){
        std::cout << "base called" << std::endl;
    }

    ~Base(){
        std::cout << "~base called" << std::endl;
    }

};


class Comp{
public:
    Comp(){
        std::cout << "comp called" << std::endl;

    }

    ~Comp(){
        std::cout << "~comp called" << std::endl;
    }
};

class Derived: public Base{

public:
    Derived(){
        std::cout << "derived called" << std::endl;
    }

    ~Derived(){
        std::cout << "~derived called" << std::endl;
    }

    Comp com;

};


int main(){
    const std::string str("Hello world!");

    std::cout << str << std::endl;
    Derived de;
}
