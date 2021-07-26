#include "13.11.1assign.h"
#include <iostream>
#include <cstring>


Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd & d)
{
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;;
}


Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{

}

void Cd::Report() const
{
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
        return *this;

    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}


Classic::Classic(const char * t1, const char * s1, const char * s2, int n, double x)
    :Cd(s1, s2, n, x)
{
    std::strcpy(title, t1);
}


Classic::Classic(const char * t1, const Cd & c)
    :Cd(c)
{
    std::strcpy(title, t1);
}


Classic::Classic(const Classic & cc)
    :Cd(cc)
{
    std::strcpy(title, cc.title);
}

Classic::Classic()
    :Cd()
{
    title[0] = '\0';
}

Classic::~Classic()
{

}

void Classic::Report() const
{
    Cd::Report();
    std::cout << title << std::endl;
}

Classic & Classic::operator=(const Classic & cc)
{
    if(this == &cc)
        return *this;

    Cd::operator=(cc);
    std::strcpy(title, cc.title);

    return *this;
    
}

