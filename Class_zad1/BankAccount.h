//
// Created by michal on 9/9/24.
//

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>


class BankAccount {
private:
    int accountNumber;
    std::string accountName;
    double balance;
public:
    BankAccount();
    BankAccount(const std::string& an, long n = 0, double bal = 0.0);
    ~BankAccount();


    int getAccountNumber() const;
    std::string getAccountName() const;
    double getBalance() const;

    void displayAccount() const;
    double deposit(double amount);
    double withdraw(double amount);
};



#endif //BANKACCOUNT_H
