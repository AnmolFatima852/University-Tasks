#include <iostream>

using namespace std;

int main() {
    char operatorSymbol;
    double num1, num2, result;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operatorSymbol;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operatorSymbol) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0)   
 {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout   
 << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;