/*Question 2: Almost Equal Strings

Problem Statement:
Write a function that checks if two strings are almost equal.
Two strings are considered almost equal if you can make them equal by swapping at most one pair of characters in one of the strings.

Examples:

s1 = "bank", s2 = "kanb" → ✅ Almost equal (swap b and k in bank)

s1 = "attack", s2 = "defend" → ❌ Not almost equal

s1 = "abcd", s2 = "abdc" → ✅ Almost equal (swap c and d)

s1 = "aa", s2 = "aa" → ✅ Already equal*/
#include <iostream>
#include <string>
using namespace std;

// Function to check if two strings are almost equal
bool areAlmostEqual(string s1, string s2) {
    if (s1.length() != s2.length()) return false;

    char diffChar1, diffChar2;
    int diff = 0;

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            diff++;
            if (diff == 1) {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            } else if (diff == 2) {
                if (s1[i] != diffChar2 || s2[i] != diffChar1)
                    return false;
            } else {
                return false; // More than 2 differences
            }
        }
    }

    // diff == 0 → already equal
    // diff == 2 → can fix with one swap
    // diff == 1 → not possible
    return (diff == 0 || diff == 2);
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2
