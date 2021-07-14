
#include "10.10.1assign.h"
#include <cstring>
#include <iostream>


BankAccount::BankAccount()
{
    
}


BankAccount::BankAccount(const char * name, const char * account, long money)
{
    strcpy(m_name, name);
    strcpy(m_account, account);
    m_money = money;
}


void BankAccount::setBankAccount(const char * name, const char * account, long money)
{
    strcpy(m_name, name);
    strcpy(m_account, account);
    m_money = money;
}


void BankAccount::show() const
{
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Account: " << m_account << std::endl;
    std::cout << "Money: " << m_money << std::endl;
}


void BankAccount::deposit(long money)
{
    m_money += money;
}


void BankAccount::withdraw(long money)
{
    if (m_money >= money)
    {
        m_money -= money;
    }
    else
    {
        std::cerr << "You money is not enough" << std::endl;
    }
}