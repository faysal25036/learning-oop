#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNo, string holder, double initialBalance) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount! Must be positive." << endl;
            return;
        }

        balance += amount;
        cout << "Deposited " << amount << " successfully." << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount! Must be positive." << endl;
            return;
        }

        if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
            return;
        }

        balance -= amount;
        cout << "Withdrew " << amount << " successfully." << endl;
    }

    double getBalance() {
        return balance;
    }

    void displayAccountInformation() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : " << balance << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    BankAccount acc1(1001, "Rahim", 5000);
    BankAccount acc2(1002, "Karim", 2000);

    // acc1.balance = 100000; // Error: balance is private.

    cout << "--- Account 1 ---" << endl;
    acc1.displayAccountInformation();

    acc1.deposit(1500);
    acc1.withdraw(2000);
    acc1.deposit(-300);
    acc1.withdraw(10000);

    cout << "Current balance: " << acc1.getBalance() << endl;
    acc1.displayAccountInformation();

    cout << "--- Account 2 ---" << endl;
    acc2.displayAccountInformation();

    acc2.withdraw(500);
    acc2.deposit(0);

    cout << "Current balance: " << acc2.getBalance() << endl;
    acc2.displayAccountInformation();

    return 0;
}
