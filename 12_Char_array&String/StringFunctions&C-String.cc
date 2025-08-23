// Program 2: String Functions & C-Strings (StringFunctions.cpp)
// Covers: cstring Functions, C++ Strings, for-each loop, String Member Functions

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    // ---------- C-STRING FUNCTIONS ----------
    char s1[20] = "Hello";
    char s2[20] = "World";

    cout << "strlen(s1): " << strlen(s1) << endl;
    cout << "strcmp(s1,s2): " << strcmp(s1, s2) << endl;

    strcat(s1, s2); // Concatenate
    cout << "Concatenated: " << s1 << endl;

    // ---------- C++ STRINGS ----------
    string str = "OpenAI GPT";
    cout << "\nC++ String: " << str << endl;
    cout << "Substring (0,5): " << str.substr(0,5) << endl;

    // for-each loop
    cout << "Characters: ";
    for (char c : str) cout << c << " ";
    cout << endl;

    // String member functions
    cout << "Length: " << str.length() << endl;
    cout << "Find GPT: " << str.find("GPT") << endl;
    cout << "Replace: " << str.replace(0, 6, "AI") << endl;

    return 0;
}
