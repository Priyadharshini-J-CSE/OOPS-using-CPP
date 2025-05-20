#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Parameterized constructor
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            cout << "Initial balance cannot be negative. Setting balance to 0.\n";
            balance = 0;
        } else {
            balance = initialBalance;
        }
    }

    // Copy constructor
    BankAccount(const BankAccount &existingAccount) {
        balance = existingAccount.balance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Deposit amount must be positive.\n";
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". Remaining balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount. Insufficient funds or negative amount.\n";
        }
    }

    // Method to display balance
    void displayBalance() const {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1(1000); // Initial balance of 1000
    account1.deposit(500);
    account1.withdraw(300);
    account1.displayBalance();

    BankAccount account2(account1); // Creating a new account with the same balance
    account2.displayBalance();
return 0;
}