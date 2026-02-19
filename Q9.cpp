#include <iostream>
using namespace std;

class Project {
public:
    string projectTitle;
    int duration; 

    Project(string title, int d) {
        projectTitle = title;
        duration = d;
    }

    void showProject() const {
        cout << "Project: " << projectTitle << " (" << duration << ")" << endl;
    }
};

class Employee {
private:
    string empName;
    double salary;
    Project* project;   // (aggregation) 

public:
    static float taxRate;   

    Employee(string name, double sal, Project* p) {
        empName = name;
        salary = sal;
        project = p;
    }

    static void changeTaxRate(float newRate) {
        taxRate = newRate;
        cout << "Tax rate updated to " << taxRate << "% for all employees.\n";
    }

    double calculateNetSalary() const {
        return salary - (salary * taxRate / 100);
    }

    void showDetails() const {
        cout << "\nEmployee Name: " << empName << endl;
        cout << "Gross Salary: " << salary << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
        cout << "Net Salary: " << calculateNetSalary() << endl;
        project->showProject();
    }
};

float Employee::taxRate = 10.0;

int main() {

    Project p1("Food Delivery App", 12);
    Project p2("Chatbot System", 8);

    Employee employees[3] = {
        Employee("Sumaima", 70000, &p1),
        Employee("Zainab", 55000, &p2),
        Employee("Aaisha", 60000, &p1)
    };

    Employee::changeTaxRate(10.0);

    for(int i = 0; i < 3; i++) {
        employees[i].showDetails();
    }
    return 0;
}


