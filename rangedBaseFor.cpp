#include <iostream>
#include <vector>
int main(){
for (int i: {2, 3, 4, 5, 6}) {
    std::cout << i << std::endl;
}

std::vector<double> vec = {90.8, 233.9, 89.33};
for(auto& elem : vec){
    elem *= 3;
    std::cout << elem << std::endl;
}


}
