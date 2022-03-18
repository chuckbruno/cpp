#include <iostream>
#include <thread>
#include <string>


void download(std::string file)
{
    for(int i=0; i < 10; i++)
    {
        std::cout << "Downloading " << file
            << " (" << i * 10 << "%)..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(400));

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
    myFunc();
    interact();
    std::cout << "Waiting for child thread ..." << std::endl;
    std::cout << "Child thread exited!" << std::endl;

    return 0;
}
