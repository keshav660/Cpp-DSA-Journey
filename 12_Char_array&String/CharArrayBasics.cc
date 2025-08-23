// Program 1: Char Array Basics (CharArrayBasics.cpp)
// Covers: Char Data Type, Character Array, Input, Uppercase, Reverse, Palindrome

#include <iostream>
#include <cstring>
using namespace std;

// Function to convert string to uppercase
void toUpperCase(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
    }
}

// Function to reverse char array
void reverseChar(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n/2; i++) {
        swap(str[i], str[n-1-i]);
    }
}

// Function to check palindrome
bool isPalindrome(char str[]) {
    int i = 0, j = strlen(str)-1;
    while (i < j) {
        if (str[i] != str[j])
            return false;
        i++; j--;
    }
    return true;
}

int main() {
    // Revisit char type
    char ch = 'A';
    cout << "Char: " << ch << " ASCII: " << int(ch) << endl;

    // Character array example
    char arr[10] = "Hello";
    cout << "Character Array: " << arr << endl;

    // Input char array
    char str[100];
    cout << "\nEnter a word: ";
    cin >> str;

    // Uppercase conversion
    toUpperCase(str);
    cout << "Uppercase: " << str << endl;

    // Reverse char array
    reverseChar(str);
    cout << "Reversed: " << str << endl;

    // Palindrome check
    if (isPalindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
