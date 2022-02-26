#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <condition_variable>


int main()
{
    std::condition_variable cv;
    std::mutex mtx;

    bool ready = false;

    std::thread t1([&]{
            std::unique_lock lck(mtx);
            cv.wait(lck, [&]{return ready;});
            lck.unlock();

            std::cout << "t1 is awake" << std::endl;
            });
    std::cout << "notifyint not ready" << std::endl;
    cv.notify_one();

    ready = true;
    std::cout << "notifying ready" << std::endl;
    cv.notify_one();

    t1.join();

    return 0;
}
