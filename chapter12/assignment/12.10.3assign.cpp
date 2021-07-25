#include <iostream>
#include "12.10.3assign.h"


Stock::Stock()
{
    const char * tempPtr = "no name";
    int length = strlen(tempPtr);
    company = new char[length + 1];
    strcpy(company, tempPtr);
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;

}


Stock::Stock(const char * co, long n, double pr)
{
    int length = strlen(co);
    company = new char[length + 1];
    strcpy(company, co);
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; " << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}


Stock::~Stock()
{
    delete[] company;
}


void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. " << "Transaction is aborted. \n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}


void Stock::sell(long num, double price)
{
    using std::cout;
    if ( num < 0 )
    {
        cout << "Number of shares sold can't be negative. " << "Transaction is aborted. \n";
    }
    else if ( num > shares )
    {
        cout << "You can't sell more than you have! " << "Transaction is aborted. \n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}


void Stock::update(double price)
{
    share_val = price;
    set_tot();
}


void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);

    std::streamsize prec = cout.precision(3);

    cout << "Company " << company << " Shares: " << shares << '\n';
    cout << " Share price: $" << share_val;
    cout.precision(2);
    cout << " Total worth: $" << total_val << '\n';
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}


std:: ostream & operator<<(std::ostream & os, const Stock & st)
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);

    std::streamsize prec = cout.precision(3);

    cout << "Company " << st.company << " Shares: " << st.shares << '\n';
    cout << " Share price: $" << st.share_val;
    cout.precision(2);
    cout << " Total worth: $" << st.total_val << '\n';
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);

    return os;
}


const Stock & Stock::topval(const Stock& s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
