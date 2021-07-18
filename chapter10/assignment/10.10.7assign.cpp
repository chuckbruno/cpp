#include "10.10.7assign.h"
#include <iostream>
#include <string>


Plorg::Plorg(const char * nptr, int rate)
{
    strcpy(m_name, nptr);
    m_rate = rate;
}


void Plorg::setRate(int rate)
{
    m_rate = rate;
}


void Plorg::showPlorg() const
{
    std::cout << "name: " << m_name << "; rate: " << m_rate << std::endl;
}
