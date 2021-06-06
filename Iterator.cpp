#include <vector>
#include <iostream>

int main(){

    std::vector<int> c = {1, 2 , 3, 4, 5};
    std::vector<int>::iterator ite = c.begin();

    for(; ite != c.end(); ++ite){
        std::cout << *ite << std::endl;
    }

    for(auto& i: c){
        i *= 3;
        std::cout << i << std::endl;
    }
}