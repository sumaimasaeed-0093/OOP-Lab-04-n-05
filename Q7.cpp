#include <iostream>
using namespace std;

class Account {
private:
    string accountHolder;
    double balance;

public:
    static string bankName;       
    static double interestRate;   

    Account(string name, double bal) {
        accountHolder = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void showBalance() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Bank Name: " << bankName << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Balance: " << balance << endl;
    }
};

string Account::bankName = "Meezan Bank";
double Account::interestRate = 5.0;

int main() {

    Account a1("Sumaima", 30000);
    Account a2("Aaisha", 25000);
    Account a3("Zainab", 29000);

    a1.deposit(2000);
    a2.deposit(3000);

    Account::interestRate = 6.5;

    a1.showBalance();
    a2.showBalance();
    a3.showBalance();

    return 0;
}


