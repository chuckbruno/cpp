#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

const int SIZE = 100;

class BankAccount
{
private:
    char m_name[SIZE];
    char m_account[SIZE];
    long m_money;
public:
    BankAccount();
    BankAccount(const char * name, const char * account, long money);

    void setBankAccount(const char * name, const char * account, long money);
    void show() const;
    void deposit(long money);
    void withdraw(long money);
};
#endif