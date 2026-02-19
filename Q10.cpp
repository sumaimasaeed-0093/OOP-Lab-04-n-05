#include <iostream>
using namespace std;

class Branch {
public:
    string branchName;
    string city;

    Branch(string name, string c) {
        branchName = name;
        city = c;
    }

    void showBranch() const {
        cout << "Branch: " << branchName << " , City: " << city << endl;
    }
};


class Account {
private:
    string accountHolder;
    double balance;
    Branch* branch;   // (Aggregation)

public:
    static string bankName;
    static float interestRate;

    Account(string holder, double bal, Branch* b) {
        accountHolder = holder;
        balance = bal;
        branch = b;
    }

    static void updateInterestRate(float newRate) {
        interestRate = newRate;
        cout << "\nBank has updated interest rate to " << interestRate << "% for all accounts.\n";
    }

    void showBalance() const {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Bank: " << bankName << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        branch->showBranch();
    }
};

string Account::bankName = "Meezan Bank";
float Account::interestRate = 5.0;

int main() {
    Branch b1("Main Branch", "Islamabad");
    Branch b2("City Branch", "Karachi");

    Account accounts[3] = {
        Account("Sumi", 180000, &b1),
        Account("Zainu", 180000, &b2),
        Account("Aashu", 130000, &b1)
    };

    Account::updateInterestRate(6.5);

    for(int i = 0; i < 3; i++) {
        accounts[i].showBalance();
    }
    return 0;
}

