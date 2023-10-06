#include <utility>
#include <string>
#include <iostream>
#include <type_traits>
#include <array>

template <typename T>
using EnableIfString = std::enable_if_t<std::is_convertible_v<T, std::string>>;

class Person
{
private:
    std::string name;

public:
    template <typename STR, typename = EnableIfString<STR>>
    explicit Person(STR &&n) : name(std::forward<STR>(n))
    {
        std::cout << "TMPL-CONSTR for '" << name << "'\n";
    }

    Person(Person const &p) : name(p.name)
    {
        std::cout << "COPY-CONSTR Person '" << name << "'\n";
    }

    Person(Person &&p) : name(std::move(p.name))
    {
        std::cout << "MOVE-CONSTR Person '" << name << "'\n";
    }
};

template <typename T>
void outR(T &arg)
{
    if (std::is_array<T>::value)
    {
        std::cout << "got array of " << std::extent<T>::value << " elems\n";
    }
    else
    {
        std::cout << "T is not an array\n";
    }
}

int main()
{
    // std::string s = "sname";
    // Person p1(s);
    // Person p2("tmp");

    // Person p3(p1);
    // Person p4(std::move(p1));

    // const Person p2c("ctmp");
    // Person p3c(p2c);

    // std::cout << p1.name << std::endl;

    std::cout << std::boolalpha;
    int a[] = {1, 2, 3, 4, 5};
    std::cout << std::is_array<int []>::value << std::endl;
    std::array<int, 4> b = {5, 6, 7, 8};
    outR(a);
    outR(b);
}
