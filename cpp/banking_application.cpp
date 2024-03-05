#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolderName;
    string balance;

public:
    BankAccount(string number, string name)
    {
        accountNumber = number;
        accountHolderName = name;
        balance = 0.0;
    }

    void printPassBook()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance : $: " << balance << endl;
    }

    void deposit(double amount)
    {
    }
};

// can we say that nested class is an container class, if yes, then how ?