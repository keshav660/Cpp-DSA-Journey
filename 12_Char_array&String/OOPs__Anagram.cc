// Program 3: OOPs and Anagram Check (OOPsAndAnagram.cpp)
// Covers: OOPs intro with Strings, Valid Anagram

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// ---------- OOPS WITH STRINGS ----------
class Student {
    string name;
public:
    Student(string n) { name = n; }
    void display() { cout << "Student Name: " << name << endl; }
};

// ---------- ANAGRAM FUNCTION ----------
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main() {
    // OOPs Example
    Student s("Rahul");
    s.display();

    // Anagram check
    string s1, s2;
    cout << "\nEnter first word: ";
    cin >> s1;
    cout << "Enter second word: ";
    cin >> s2;

    if (isAnagram(s1, s2))
        cout << "Valid Anagram" << endl;
    else
        cout << "Not an Anagram" << endl;

    return 0;
}
