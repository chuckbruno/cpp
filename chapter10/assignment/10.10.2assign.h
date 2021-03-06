#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>


class Person
{
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];

public:
    Person();
    Person(const std::string& ln, const char* fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};


#endif