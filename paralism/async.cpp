#include <iostream>
#include <thread>
#include <string>
#include <future>

int download(std::string file)
{
    for(int i=0; i < 10; i++)
    {
        std::cout << "Downloading " << file
            << " (" << i * 10 << "%)..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(400));

    }
    std::cout << "Downloaded complete: " << file << std::endl;
    return 404;
}



void interact()
{
    std::string name;
    std::cin >> name;
    std::cout << "Hi,  " << name << std::endl;
}

void myFunc()
{
     std::thread t1([&]{
        download("hello.zip");
            });
    t1.detach();

}
int main()
{
//    std::thread t1([&]{
//        download("hello.zip");
            //});
    std::future<int> fret = std::async([&] {
            return download("hello.zip");
            });

    interact();
    while(true)
    {
        std::cout << "Waiting for download complete... " << std::endl;
        auto stat = fret.wait_for(std::chrono::milliseconds(10000));
        if(stat == std::future_status::ready)
        {
            std::cout << "Future is ready!!" << std::endl;
            break;
        }
        else{
            std::cout << "Future not ready!!" << std::endl;
        }
    }
    int ret = fret.get();
    std::cout << "Download result: " << ret << std::endl;
    std::cout << "Waiting for child thread ..." << std::endl;
    std::cout << "Child thread exited!" << std::endl;

    return 0;
}
