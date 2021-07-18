#include "10.10.2assign.h"
#include <cstring>
#include <iostream>


Person::Person()
{   lname = "";
    fname[0] = '\0';
}


Person::Person(const std::string& ls, const char * fn)
{

    lname = ls;
    strcpy(fname, fn);

}


void Person::Show() const
{
    std::cout << lname << ": " << fname << std::endl;
}


void Person::FormalShow() const
{
    std::cout << fname << ": " << lname << std::endl;
}
