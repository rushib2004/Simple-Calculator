#include <iostream>
using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    cout << "Welcome to the Basic Calculator!!" << endl;
    cout << "Choose an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    int choice;
    cout << "Enter Number Of Your Choice (1/2/3/4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Invalid choice.Again run the code and Choose a valid operation." << endl;
        return 1;
    }

    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "The Addition is: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "The Subtraction is: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "The Multiplication is: " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "The Division is: " << divide(num1, num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
    }

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}
