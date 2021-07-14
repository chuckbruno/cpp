
#include "10.10.1assign.h"

int main()
{
    BankAccount ba;
    ba.setBankAccount("Chuck Bruno", "NongYeYinHang", 2300);
    ba.show();

    ba.deposit(2900);
    ba.show();

    ba.withdraw(4000);
    ba.show();
    
    ba.withdraw(3000);
    ba.show();

    return 0;
}