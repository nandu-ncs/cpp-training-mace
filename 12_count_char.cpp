#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char target;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to count occurrences: ";
    cin >> target;

    int count = 0;
    for (char ch : str) {
        if (ch == target) {
            count++;
        }
    }

    cout << "The character '" << target << "' occurs " << count << " times in the string.";

    return 0;
}
