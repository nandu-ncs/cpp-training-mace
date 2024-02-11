#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    if (str == reversedStr) {
        cout << "The string \"" << str << "\" is a palindrome.";
    } else {
        cout << "The string \"" << str << "\" is not a palindrome.";
    }

    return 0;
}
