#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>

int main()
{
    std::mutex mtx;
    std::atomic<int> counter = 0;

    std::thread t1([&]{
            for(int i = 0; i < 1000; i++)
            {
            counter += 1;
            }
            });
    std::thread t2([&]
            {
            for(int i = 0; i < 1000; i++){

            counter += 1;
            }
            });

    t1.join();
    t2.join();

    std::cout << counter << std::endl;
    return 0;

}
