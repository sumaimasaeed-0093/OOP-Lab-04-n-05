#include <iostream>
using namespace std;

class Book {
private:
    string title;
    float price;

public:
    void setData(string t, float p) {
        title = t;
        price = p;
    }

    void showData() const {
        cout << "Title: " << title << " and Price: " << price << endl;
    }
};

int main() {
    Book books[5];   

    books[0].setData("The Hunger Games", 2000);
    books[1].setData("The Thousand Splendid Suns", 1200);
    books[2].setData("Pride and Prejudice", 1500);
    books[3].setData("Rich Dad Poor Dad", 2000);
    books[4].setData("The Kite Runner", 2100);

    for (int i = 0; i < 5; i++) {
        books[i].showData();
    }

    return 0;
}

