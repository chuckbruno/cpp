#include <cstring>
#include "12.1strngbad.h"


int StringBad::num_strings = 0;


StringBad::StringBad(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;

    std::cout << num_strings << ": \"" << str << "\" object_created\n" ;
}


StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    std::cout << num_strings << ": \"" << "\" default object created\n";
}


StringBad::StringBad(const StringBad & st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    std::cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad & StringBad::operator=(const StringBad & st)
{
    if(this == &st)
        return *this;

    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);

    return *this;
}



StringBad::~StringBad()
{
    std::cout << "\"" << str << "\" object deleted, ";
    --num_strings;
    std::cout << num_strings << " left\n";
    delete [] str;
}


std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}
