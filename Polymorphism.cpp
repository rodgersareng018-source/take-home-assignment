#include <iostream>
#include <string>
using namespace std;

// Base Class with a virtual function
class Employee {
public:
    virtual void work() {
        cout << "Employee is performing general duties." << endl;
    }

    // Virtual destructor for safe polymorphic deletion
    virtual ~Employee() {}
};

// Derived Class 1
class Manager : public Employee {
public:
    void work() override {
        cout << "Manager is leading team meetings and planning project sprints." << endl;
    }
};

// Derived Class 2
class Developer : public Employee {
public:
    void work() override {
        cout << "Developer is writing, testing, and debugging C++ code." << endl;
    }
};

int main() {
    cout << "--- Runtime Polymorphism Demonstration ---" << endl;

    // Base class pointers holding addresses of derived objects
    Employee* emp1 = new Manager();
    Employee* emp2 = new Developer();

    // Calling the same function name results in different behaviors at runtime
    cout << "Pointer 1 behavior: ";
    emp1->work();

    cout << "Pointer 2 behavior: ";
    emp2->work();

    // Clean up dynamically allocated memory
    delete emp1;
    delete emp2;

    return 0;
}