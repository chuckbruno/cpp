#include "13.11.2assign.h"
#include <iostream>
#include <cstring>


Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[std::strlen(s1) + 1];
    std::strcpy(performers, s1);
    label = new char[std::strlen(s2) + 1];
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd & d)
{
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;;
}


Cd::Cd()
{
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
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
    delete [] performers;
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    delete [] label;
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}


Classic::Classic(const char * t1, const char * s1, const char * s2, int n, double x)
    :Cd(s1, s2, n, x)
{
    title = new char[std::strlen(t1) + 1];
    std::strcpy(title, t1);
}


Classic::Classic(const char * t1, const Cd & c)
    :Cd(c)
{
    title = new char[std::strlen(t1) + 1];
    std::strcpy(title, t1);
}


Classic::Classic(const Classic & cc)
    :Cd(cc)
{
    title = new char[std::strlen(cc.title) + 1];
    std::strcpy(title, cc.title);
}

Classic::Classic()
    :Cd()
{
    title = new char[1];
    title[0] = '\0';
}

Classic::~Classic()
{
    delete [] title;

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

    delete [] title;
    title = new char[std::strlen(cc.title) + 1];
    std::strcpy(title, cc.title);

    return *this;
    
}

