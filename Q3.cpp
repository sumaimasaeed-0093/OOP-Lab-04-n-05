#include <iostream>
using namespace std;

class BankAccount {
private:
    static float interestRate;   

public:
    static void changeRate(float r) {
        interestRate = r;
    }

    void showRate() const {
        cout << "Interest Rate: " << interestRate << endl;
    }
};

float BankAccount::interestRate = 3.0;  
int main() {
    BankAccount a1, a2, a3;

    cout << "Initial Rate:" << endl;
    a1.showRate();
    a2.showRate();
    a3.showRate();

    BankAccount::changeRate(7);

    cout << "\nFinal Rate:" << endl;
    a1.showRate();
    a2.showRate();
    a3.showRate();
    return 0;
}


