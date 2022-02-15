#include <iostream>
#include <atomic>
#include <thread>


std::atomic<int> foo = 0;

void set_foo(int x)
{
    foo = x;
}

void print_foo()
{
    while(foo == 0)
    {
        std::this_thread::yield();
    }
    std::cout << "foo: " << foo << std::endl;
}


int main()
{
    std::thread first(print_foo);
    std::thread second(set_foo, 10);
    first.join();
    second.join();
    return 0;
}

