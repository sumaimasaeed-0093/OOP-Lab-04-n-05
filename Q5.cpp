#include <iostream>
using namespace std;

class Department {
public:
    string name;
    string code;

    Department() {}

    Department(string n, string c) {
        name = n;
        code = c;
    }
};

class Student {
public:
    string name;
    int age;
    Department dept;   

    Student() {}

    Student(string n, int a, Department d) {
        name = n;
        age = a;
        dept = d;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department Name: " << dept.name << endl;
        cout << "Department Code: " << dept.code << endl;
    }
};

int main() {

    Department d1("Computer Science", "CS1001");
    Department d2("Artificial Intelligence", "AI1002");
    Department d3("Fintech", "FN1003");

    Student s[3] = {
        Student("Sumaima", 19, d1),
        Student("Aaisha", 19, d2),
        Student("Zainab", 19, d3)
    };

    for(int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}

