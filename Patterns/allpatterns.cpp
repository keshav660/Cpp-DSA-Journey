#include <iostream>
using namespace std;

void nestedLoops() {
    cout << "Nested Loops Example:\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << "\n";
    }
}

void starPattern() {
    int n = 5;
    cout << "Star Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

void invertedStarPattern() {
    int n = 5;
    cout << "Inverted Star Pattern:\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

void halfPyramidPattern() {
    int n = 5;
    cout << "Half Pyramid Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void characterPyramidPattern() {
    int n = 5;
    cout << "Character Pyramid Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

void hollowRectanglePattern() {
    int rows = 5, cols = 7;
    cout << "Hollow Rectangle Pattern:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}

void floydsTriangle() {
    int n = 5, num = 1;
    cout << "Floyd's Triangle Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << "\n";
    }
}

void butterflyPattern() {
    int n = 5;
    cout << "Butterfly Pattern:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "* ";
        for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "* ";
        for (int j = 1; j <= 2 * (n - i); j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\nChoose a pattern to display:\n";
        cout << "1. Nested Loops\n2. Star Pattern\n3. Inverted Star Pattern\n4. Half Pyramid Pattern\n";
        cout << "5. Character Pyramid Pattern\n6. Hollow Rectangle Pattern\n7. Floyd's Triangle Pattern\n8. Butterfly Pattern\n9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: nestedLoops(); break;
            case 2: starPattern(); break;
            case 3: invertedStarPattern(); break;
            case 4: halfPyramidPattern(); break;
            case 5: characterPyramidPattern(); break;
            case 6: hollowRectanglePattern(); break;
            case 7: floydsTriangle(); break;
            case 8: butterflyPattern(); break;
            case 9: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 9);
    return 0;
}