#include <iostream>
#include <mutex>


std::recursive_mutex mtx;

void other()
{
    mtx.lock();
    std::cout << "Hello" << std::endl;
    mtx.unlock();
}

void func()
{
    mtx.lock();
    other();
    mtx.unlock();
}

int main()
{
    func();
    return 0;
}
