#include <vector>
#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <forward_list>

namespace llf{

void test_vector(const long& value) {
    std::cout << "\ntest_vector().......\n";
    std::vector<std::string> c;
    char buf[10];

    clock_t timeStart = clock();
    for(long i=0;i<value;i++)
    {
        try{
            snprintf(buf, 10, "%d", rand());
            c.push_back(std::string(buf));
        }
        catch(std::exception& e){
            std::cout << "i= " << i << e.what() << std::endl;
            abort();
        }
    }

    std::cout << sizeof(int) << std::endl;
    std::cout << "million seconds " << clock() - timeStart << std::endl;
    std::cout << "vector.size() = " << c.size() << std::endl;
    std::cout << "vector.front() = " << c.front() << std::endl;
    std::cout << "vector.back() = " << c.back() << std::endl;
    std::cout << "vector.data() = " << c.data() << std::endl;
    std::cout << "vector.capacity() = " << c.capacity() << std::endl;

    auto target = std::find(c.begin(), c.end(), c.front());
    if (target != c.end()){
        std::cout << *target << std::endl;
    }
    else
        {
            std::cout << "not found" << std::endl;
        }
}

}

int main(){
    llf::test_vector(1'000'000);
    return 0; 
}