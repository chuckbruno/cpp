#include <iostream>
#include <rbTree>

void main(){
    std::rb_tree<int, int, identity<int>, less<int>> itree;

    std::cout << itree.empty() << std::endl;
    std::cout << itree.size() << std::endl;

}

