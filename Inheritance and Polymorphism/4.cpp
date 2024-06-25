#include <iostream>
#include <string>

using namespace std;

class PersonalInfo {
protected:
    string name;
    string className;
    int rollNumber;

public:
    void inputPersonalInfo() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter class: ";
        getline(cin, className);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore(); 
    }

    void displayPersonalInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class AcademicInfo {
protected:
    float marks;

public:
    void inputAcademicInfo() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    void displayAcademicInfo() const {
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

class Student : public PersonalInfo, public AcademicInfo {
public:
    void inputStudentInfo() {
        inputPersonalInfo();
        inputAcademicInfo();
    }

    void displayStudentInfo() const {
        displayPersonalInfo();
        displayAcademicInfo();
    }
};

int main() {
    Student student;
    
    student.inputStudentInfo();

    student.displayStudentInfo();

    return 0;
}


