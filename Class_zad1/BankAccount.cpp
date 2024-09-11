//
// Created by michal on 9/9/24.
//

#include "BankAccount.h"

#include <iostream>
#include <ostream>

BankAccount::BankAccount() {
    std::cout << "BankAccount constructor" << std::endl;
    accountName = "no name";
    balance = 0;
    accountNumber = 0;
}
BankAccount::BankAccount(const std::string &an, long n, double bal) {
    std::cout << "BankAccount constructor using" << an << std::endl;
    accountName = an;
    if(n < 0) {
        std::cout << "BankAccount cannot have negative number of bank account" << an << " number set to 0.\n";
        accountNumber = 0;
    }
    else
        accountNumber = n;
    balance = bal;
}

double BankAccount::getBalance() const {
    return balance;
}
std::string BankAccount::getAccountName() const {
    return accountName;
}
int BankAccount::getAccountNumber() const {
    return accountNumber;
}
void BankAccount::displayAccount() const {
    std::cout << "BankAccount details:\n";
    std::cout << getAccountName() << std::endl;
    std::cout << getBalance() << std::endl;
    std::cout << getAccountNumber() << std::endl << std::endl;
}
BankAccount::~BankAccount() {

}
double BankAccount::deposit(double amount) {
    balance += amount;
    std::cout << "BankAccount deposit: " << amount << std::endl;
    std::cout << "BankAccount balance: " << balance << std::endl << std::endl;
    return balance;
}
double BankAccount::withdraw(double amount) {
    balance -= amount;
    std::cout << "BankAccount withdraw: " << amount << std::endl;
    std::cout << "BankAccount balance: " << balance << std::endl << std::endl;
    return balance;
}


