// Online C++ compiler to run C++ program online
#include <algorithm>
#include <string>
#include <string_view>
#include <iostream>
#include <cctype>
#include <vector>
#include <iostream>

void print_container(const std::vector<int>& c) 
{
    for (int i : c) {
        std::cout << i << " ";
    }
    std::cout << '\n';
    

}

struct book
{
  int price;
  std::string name;
  
  friend std::ostream& operator<<(std::ostream& os, const book& b)
  {
        os << "price: " << b.price << "; name: " << b.name << std::endl;
        return os;
  }
};
 
 
int main()
{
    book a{12, "cook"};
    std::vector<int> c{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_container(c);
    
    auto cc = std::remove_if(c.begin(), c.end(), [](int i){return i % 2 == 0;});
    print_container(c);
    
    c.erase(cc, c.end());
    print_container(c);
    
    std::cout << a << std::endl;
}

// output：

// 0 1 2 3 4 5 6 7 8 9 
// 1 3 5 7 9 5 6 7 8 9 
// 1 3 5 7 9 
// price: 12; name: cook
