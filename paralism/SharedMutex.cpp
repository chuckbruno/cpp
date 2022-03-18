#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <shared_mutex>

class MTVector{
    std::vector<int> m_arr;
    mutable std::shared_mutex m_mtx;

    public:
    void push_back(int val)
    {
        //m_mtx.lock();
        std::unique_lock qrd(m_mtx);
        m_arr.push_back(val);
        //m_mtx.unlock();
    }

    size_t size() const
    {
        // m_mtx.lock_shared();
        std::shared_lock qrd(m_mtx);
        size_t ret = m_arr.size();
        //m_mtx.unlock_shared();
        return ret;
    }
};


int main()
{
    MTVector arr;
    std::thread t1([&]{
            for(int i =0; i < 1000; i++)
            {
            arr.push_back(i);
            }
            });

    std::thread t2([&]{
            for(int i = 0; i < 1000; i++)
            {
            arr.push_back(1000 + i);
            }
            });

    t1.join();
    t2.join();

    std::cout << arr.size() << std::endl;

    return 0;
}
