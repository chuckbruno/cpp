#include <iostream>
#include <memory>

void foo(std::shared_ptr<int> i){
    (*i)++;
}


int main(){

    std::shared_ptr<int> pointer = std::make_shared<int>(10);
    std::shared_ptr<int> pointer2 = pointer;
    std::shared_ptr<int> pointer3 = pointer;

    int *p = pointer.get();
    std::cout << "pointer.user_count() = " << pointer.use_count() << std::endl;
    std::cout << "pointer2.user_count() = " << pointer2.use_count() << std::endl;
    std::cout << "pointer3.user_count() = " << pointer3.use_count() << std::endl;

    pointer2.reset();
    std::cout << "reset pointer2: " << std::endl;
    std::cout << "pointer.user_count() = " << pointer.use_count() << std::endl;
    std::cout << "pointer2.user_count() = " << pointer2.use_count() << std::endl;
    std::cout << "pointer3.user_count() = " << pointer3.use_count() << std::endl;

    pointer3.reset();
    std::cout << "reset pointer3: " << std::endl;
    std::cout << "pointer.user_count() = " << pointer.use_count() << std::endl;
    std::cout << "pointer2.user_count() = " << pointer2.use_count() << std::endl;
    std::cout << "pointer3.user_count() = " << pointer3.use_count() << std::endl;

    foo(pointer);
    std::cout << *pointer << std::endl;


    return 0;
}