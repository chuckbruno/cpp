#include <iostream>
#include <memory>

template<typename T, typename ... Args>
std::unique_ptr<T> make_unique(Args&&... args){
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

struct Foo{
    Foo() {std::cout << "Foo::Foo" << std::endl;}
    ~Foo() {std::cout << "Foo::~Foo" << std::endl;}
    void foo() {std::cout << "Foo::foo" << std::endl;}
};

void f(const Foo& ){
    std::cout << "f(const Foo& )" << std::endl;
}

int main() {
    std::unique_ptr<Foo> p1(make_unique<Foo>());
    if (p1) p1->foo();
    {
        std::unique_ptr<Foo> p2(std::move(p1));
        f(*p2);
        if(p2) p2->foo();
        if(p1) p1->foo();

        p1 = std::move(p2);
        if(p2) p2->foo();
        std::cout << "p2 被销毁" << std::endl;
    }

    if (p1) p1->foo();
}