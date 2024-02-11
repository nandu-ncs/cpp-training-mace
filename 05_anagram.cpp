#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length()) {
        cout << "The strings are not anagrams.";
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "The strings are anagrams.";
    } else {
        cout << "The strings are not anagrams.";
    }

    return 0;
}
