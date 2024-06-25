//Write a program to find the max number from given two numbers
//using friend function

#include <iostream>
using namespace std;

void findMax(int a, int b);

class MaxFinder {
private:
    int num1;
    int num2;

public:
    MaxFinder(int a, int b) {
        num1 = a;
        num2 = b;
    }

   
    friend void findMax(int a, int b);
};

// Friend function definition
void findMax(int a, int b) {
    int maxNumber = (a > b) ? a : b;
    cout << "Max number between " << a << " and " << b << " is: " << maxNumber << endl;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MaxFinder mf(num1, num2);

    findMax(num1, num2);

    return 0;
}

