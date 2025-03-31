#include <iostream>
using namespace std;

void forLoopExample() {
    cout << "For Loop Example - Print numbers 1 to 10:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << "\n";
}

void printApnaCollege() {
    cout << "Printing 'Apna College' 5 times using a loop:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Apna College\n";
    }
}

void printNNaturalNumbers() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "First " << n << " natural numbers:\n";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << "\n";
}

void sumOfNNaturalNumbers() {
    int n, sum = 0;
    cout << "Enter the value of N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers: " << sum << "\n";
}

void whileLoopExample() {
    int i = 1;
    cout << "While Loop Example - Print numbers 1 to 5:\n";
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << "\n";
}

void doWhileLoopExample() {
    int i = 1;
    cout << "Do-While Loop Example - Print numbers 1 to 5:\n";
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << "\n";
}

void breakStatementExample() {
    cout << "Break Statement Example - Stop loop at 3:\n";
    for (int i = 1; i <= 5; i++) {
        if (i == 3)
            break;
        cout << i << " ";
    }
    cout << "\n";
}

void continueStatementExample() {
    cout << "Continue Statement Example - Skip 3:\n";
    for (int i = 1; i <= 5; i++) {
        if (i == 3)
            continue;
        cout << i << " ";
    }
    cout << "\n";
}

void checkPrime() {
    int num, flag = 1;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 2) flag = 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }
    cout << (flag ? "Prime Number\n" : "Not a Prime Number\n");
}

int main() {
    int choice;
    do {
        cout << "\nChoose a topic to practice:\n";
        cout << "1. For Loop\n2. Print Apna College\n3. Print N Natural Numbers\n4. Sum of N Natural Numbers\n";
        cout << "5. While Loop\n6. Do-While Loop\n7. Break Statement\n8. Continue Statement\n9. Check for Prime\n10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: forLoopExample(); break;
            case 2: printApnaCollege(); break;
            case 3: printNNaturalNumbers(); break;
            case 4: sumOfNNaturalNumbers(); break;
            case 5: whileLoopExample(); break;
            case 6: doWhileLoopExample(); break;
            case 7: breakStatementExample(); break;
            case 8: continueStatementExample(); break;
            case 9: checkPrime(); break;
            case 10: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 10);
    return 0;
}