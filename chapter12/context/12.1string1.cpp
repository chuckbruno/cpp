#include <cstring>
#include "12.1string1.h"

int String::num_strings = 0;


int String::HowMany()
{
    return num_strings;
}


String::String(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}


String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}


String::String(const String& st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}


String::~String()
{
    --num_strings;
    delete [] str;
}


String & String::operator=(const String & st)
{
    if(this == &st)
        return *this;

    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}


String & String::operator=(const char * s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);

    return *this;
}


char & String::operator[](int i)
{
    return str[i];
}


const char & String::operator[](int i) const
{
    return str[i];
}

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}


bool operator>(const String &st1, const String & st2)
{
    return (std::strcmp(st1.str, st2.str) > 0);
}
