#include <vector>
#include <string>
#include <thread>
#include <iostream>
#include <mutex>

int main()
{
    std::vector<int> arr;
    std::mutex mtx;
    std::thread t1([&]{
            for(int i = 0; i < 1000; i++)
            {
           // mtx.lock();
            std::lock_guard grd(mtx);
            arr.push_back(1);
            //mtx.unlock();
            }
            });
    std::thread t2([&]{
            for(int i = 0; i < 1000; i++)
            {
            //mtx.lock();
            std::lock_guard grd(mtx);
            arr.push_back(2);
           // mtx.unlock();
            }
            });

    t1.join();
    t1.join();

    return 0;
}
