#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (operation) 
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) 
            {
                result = num1 / num2;
            } 
            else 
            {
                cout << "Error: Division by zero." <<endl;
                return 1; // Return non-zero to indicate an error
            }
            break;
        default:
            cout << "Invalid operation." <<endl;
            return 1; // Return non-zero to indicate an error
    }

    cout << "Result: " << result <<endl;

    return 0; // Return 0 to indicate success
}
