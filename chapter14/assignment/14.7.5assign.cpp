#include "14.7.5assign.h"
#include <iostream>

abstr_emp::~abstr_emp()
{

}

abstr_emp::abstr_emp()
{
    fname = "null fname";
    lname = "null lname";
    job = "null job";
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
{
    fname = fn;
    lname = ln;
    job = j;
}

void abstr_emp::ShowAll() const
{
    std::cout << "fname: " << fname << std::endl;
    std::cout << "lname: " << lname << std::endl;
    std::cout << "job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
    std::cin.ignore();
    std::cout << "Enter first name: ";
    getline(std::cin, fname);
    std::cout << "Enter last name: ";
    getline(std::cin, lname);
    std::cout << "Enter job: ";
    getline(std::cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << "fname: " << e.fname << "; lname: " << e.lname << "; job: " << e.job << std::endl;
    return os;
}

employee::employee(): abstr_emp()
{

}

employee::employee(const std::string & fn, const std::string & ln, const std::string & j):
    abstr_emp(fn, ln, j)
{

}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}


void employee::SetAll()
{
    abstr_emp::SetAll();
}


manager::manager():abstr_emp(), inchargeof(0)
{

}


manager::manager(const std::string & fn, const std::string & ln, const std::string & j, int ico)
    :abstr_emp(fn, ln, j), inchargeof(ico)
{
    
}


manager::manager(const abstr_emp & e, int ico)
    :abstr_emp(e), inchargeof(ico)
{

}

manager::manager(const manager & m)
    :abstr_emp(m)
{
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
    std::cout << "inchargeof: " << inchargeof << std::endl;
    abstr_emp::ShowAll();
}


void manager::SetAll()
{
    std::cout << "Enter in charge of: ";
    std::cin >> inchargeof;

    abstr_emp::SetAll();
}

fink::fink()
    :abstr_emp()
{
    reportsto = "null reportsto";
}


fink::fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
    :abstr_emp(fn, ln, j), reportsto(rpo)
{

}


fink::fink(const abstr_emp & e, const std::string & rpo)
    :abstr_emp(e), reportsto(rpo)
{

}

fink::fink(const fink & e)
    :abstr_emp(e)
{
    reportsto = e.reportsto;
}

void fink::ShowAll() const
{
    std::cout << "reportsto: " << reportsto << std::endl;
    abstr_emp::ShowAll();
}


void fink::SetAll()
{
    std::cout << "Enter reportsto: ";
    getline(std::cin, reportsto);
    abstr_emp::SetAll();
}

highfink::highfink()
{

}

highfink::highfink(const std::string & fn, const std::string & ln,
                    const std::string & j, const std::string & rpo,
                    int ico)
    :abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{

}


highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
    :abstr_emp(e), manager(e, ico), fink(e, rpo)
{

}

highfink::highfink(const fink & f, int ico)
    :abstr_emp(f), manager(f, ico), fink(f)
{

}

highfink::highfink(const manager & m, const std::string & rpo)
    :abstr_emp(m), manager(m), fink(m, rpo)
{

}

highfink::highfink(const highfink & h)
    :abstr_emp(h), manager(h), fink(h)
{

}


void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "reportsto: " << ReportsTo() << std::endl;
    std::cout << "inchargeof: " << InchargeOf() << std::endl;
}


void highfink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Enter Reports to: ";
    std::cin >> ReportsTo();

    std::cout << "Enter InchargeOf: ";
    std::cin >> InchargeOf();
}