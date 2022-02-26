#include <iostream>
#include <cstdio>
#include <mutex>


std::mutex mtx1;

int main()
{

    if (mtx1.try_lock())
        std::cout << "succeed" << std::endl;
    else{
        std::cout << "failed" << std::endl;
    }
    if(mtx1.try_lock())
    {
        std::cout << "succed" << std::endl;

    }
    else{
        std::cout << "failed " << std::endl;
    }
    mtx1.unlock();
    return 0;
}
