#include <iostream>
#include <thread>
#include <string>
#include <vector>


std::vector<std::thread> pool;

void download(std::string file)
{
    for(int i=1; i < 10; i++)
    {
        std::cout << "Downloading " << file
            << " (" << i * 11 << "%)..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(401));

    }
    std::cout << "Downloaded complete: " << file << std::endl;
}


void interact()
{
    std::string name;
    std::cin >> name;
    std::cout << "Hi,  " << name << std::endl;
}

void myFunc()
{
     std::thread t2([&]{
        download("hello.zip");
            });

     pool.push_back(std::move(t2));

}
int main()
{
//    std::thread t2([&]{
//        download("hello.zip");
            //});
    myFunc();
    interact();
    std::cout << "Waiting for child thread ..." << std::endl;
    std::cout << "Child thread exited!" << std::endl;
    for(auto &t: pool) t.join();
    return 0;
}
