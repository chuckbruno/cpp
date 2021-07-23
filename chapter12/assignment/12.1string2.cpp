#include <cstring>
#include <cctype>
#include "12.1string2.h"

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


String & String::operator+(const String & st)
{
    char * tempPtr = new char[strlen(str) + 1];
    strcpy(tempPtr, str);
    int sum = strlen(str) + strlen(st.str) + 1;
    str = new char[sum];
    std::strcat(str, tempPtr);
    std::strcat(str, st.str);

    delete[] tempPtr;
    return *this;
}


void String::stringup()
{
    char t;
    int i = 0;
    while (str[i])
    {
        t = str[i];
        str[i] = toupper(t);
        i++;
    }
}


void String::stringlow()
{
    char t;
    int i = 0;
    while (str[i])
    {
        t = str[i];
        str[i] = tolower(t);
        i++;
    }

}


int String::has(char c) const
{
    int i = 0;
    int count = 0;
    while(str[i])
    {
        if (str[i] == c)
        {
            count++;
        }
        i++;
    }
    return count;
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

bool operator==(const String &st1, const String & st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}


String operator+(const char * s, const String &st2)
{
    int sum = strlen(s) + strlen(st2.str) + 1;
    char strArr[sum];
    strArr[0] = '\0';
    std::strcat(strArr, s);
    std::strcat(strArr, st2.str);

    return String(strArr);
}


std::ostream & operator<<(std::ostream &os, const String & st)
{
    os << st.str;
    return os;
}


std::istream & operator>>(std::istream &is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is)
        st = temp;
    while(is && is.get() != '\n')
        continue;

    return is;
}
