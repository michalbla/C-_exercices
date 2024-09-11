#include <iostream>
#include "BankAccount.h"
int main()
{

    BankAccount account1("Michal Blaszczyk", 2313456, 2300.12);
    BankAccount account2("Dominik Okonski", 23458603, 3800.50);

    account1.displayAccount();
    account1.deposit(123.00);
    account1.displayAccount();
    account1.withdraw(123.00);
    account1.displayAccount();
    return 0;
}
