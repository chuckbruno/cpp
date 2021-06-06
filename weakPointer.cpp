#include <iostream>
#include <memory>

struct A;
struct B;


struct A
{
    /* data */
    std::weak_ptr<B> pointer;
    ~A(){
        std::cout << "A 被销毁"  << std::endl;

    }
};

struct B
{
    /* data */
    std::weak_ptr<A> pointer;
    ~B(){
        std::cout << "B 被销毁" << std::endl;
    }

};


int main(){
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    std::cout << __cplusplus << std::endl;
    std::cout << 7'000 << std::endl;
    return 0;
}
