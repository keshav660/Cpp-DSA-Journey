#include <iostream>
using namespace std;

void ifElseExample() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
        cout << "Positive Number\n";
    else if (num < 0)
        cout << "Negative Number\n";
    else
        cout << "Zero\n";
}

void ternaryOperatorExample() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << "The number is " << result << "\n";
}

void switchStatementExample() {
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    switch (day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid input!\n";
    }
}

void buildCalculator() {
    double num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+': cout << "Result: " << num1 + num2 << "\n"; break;
        case '-': cout << "Result: " << num1 - num2 << "\n"; break;
        case '*': cout << "Result: " << num1 * num2 << "\n"; break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << "\n";
            else
                cout << "Cannot divide by zero!\n";
            break;
        default: cout << "Invalid operator!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\nChoose a topic to practice:\n";
        cout << "1. If-Else Statements\n2. Ternary Operator\n3. Switch Statement\n4. Build a Calculator\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: ifElseExample(); break;
            case 2: ternaryOperatorExample(); break;
            case 3: switchStatementExample(); break;
            case 4: buildCalculator(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);
    return 0;
}
