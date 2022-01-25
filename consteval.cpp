#include <type_traits>


consteval int get_value(int i)
{
    return 42 + i;
}

constexpr int func(int i)
{
    if(std::is_constant_evaluated())
    {
        return get_value(i);
    }else{
        return 24;
    }
}


int main()
{
    constexpr auto value = func(1);
    return value;
}
