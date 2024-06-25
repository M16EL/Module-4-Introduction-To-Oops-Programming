//Write a program to swap the two numbers using friend function
//without using third variable

#include <iostream>

using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    void display() const {
        cout << value << endl;
    }

    friend void swap(Number &a, Number &b);
};

void swap(Number &a, Number &b) {
    a.value = a.value + b.value;
    b.value = a.value - b.value;
    a.value = a.value - b.value;
}

int main() {
    Number num1(10);
    Number num2(20);

    cout << "Before swapping:" << endl;
    cout << "num1 = ";
    num1.display();
    cout << "num2 = ";
    num2.display();

    swap(num1, num2);

    cout << "After swapping:" << endl;
    cout << "num1 = ";
    num1.display();
    cout << "num2 = ";
    num2.display();

    return 0;
}

