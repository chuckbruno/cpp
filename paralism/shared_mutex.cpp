#include <iostream>
#include <mutex>
#include <shared_mutex>
#include <thread>


class ThreadSafeCounter
{
    public:
        ThreadSafeCounter() = default;

        unsigned int get() const{
            std::shared_lock<std::shared_mutex> lock(mutex_);
            return value_;
        }

        void increment(){
            std::unique_lock<std::shared_mutex> lock(mutex_);
            value_++;
        }
        void reset()
        {
            std::unique_lock<std::shared_mutex> lock(mutex_);
            value_ = 0;
        }
    private:
        mutable std::shared_mutex mutex_;
        unsigned int value_ = 0;
};


int main()
{
    ThreadSafeCounter counter;
    auto increment_and_print = [&](){
        for(int i = 0; i < 3; i++)
        {
            counter.increment();
            std::cout << std::this_thread::get_id() << ' ' << counter.get() << std::endl;

        }
    };
    std::thread th1(increment_and_print);
    std::thread th2(increment_and_print);

    th1.join();
    th2.join();

    return 0;
}
