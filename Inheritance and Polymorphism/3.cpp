////Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void initializePerson() {
        cout << "Enter your name and age: ";
        cin >> name >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << ", \nAge: " << age;
    }
};

class Student : public Person {
public:
    int percentage;

    void initializeStudent() {
        initializePerson();
        cout << "Enter your percentage: ";
        cin >> percentage;
    }

    void displayStudent() {
        displayPerson();
        cout << ", \nPercentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
public:
    int salary;

    void initializeTeacher() {
        initializePerson();
        cout << "Enter your salary: ";
        cin >> salary;
    }

    void displayTeacher() {
        displayPerson();
        cout << ", Salary: $" << salary << endl;
    }
};

int main() {
    int choice;
    cout << "If you are a Student, select 1. If you are a Teacher, select 2: ";
    cin >> choice;

    if (choice == 1) {
        Student student;
        student.initializeStudent();
        student.displayStudent();
    } else if (choice == 2) {
        Teacher teacher;
        teacher.initializeTeacher();
        teacher.displayTeacher();
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

