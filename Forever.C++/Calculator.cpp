// C++ Program to make a Simple Calculator using
// switch-case statements
#include <iostream>
using namespace std;

int main() {
    char op;
    double a, b, res;

    // Read the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Read the two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Define all four operations in the corresponding
    // switch-case
    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        cout << "Error! Operator is not correct";
        res = -DBL_MAX;
    }

    // Printing the result
    if (res != -DBL_MAX)
        cout << "Result: " << res;
    return 0;
}