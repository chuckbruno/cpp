#include <utility>
#include <string>
#include <iostream>
#include <type_traits>

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

int main()
{
    std::string s = "sname";
    Person p1(s);
    Person p2("tmp");

    Person p3(p1);
    Person p4(std::move(p1));

    // const Person p2c("ctmp");
    // Person p3c(p2c);

    // std::cout << p1.name << std::endl;
}