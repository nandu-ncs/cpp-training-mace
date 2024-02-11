#include <iostream>
#include <string>
using namespace std;

int main() {
    string st;
    
    cout << "Enter a string: ";
    getline(cin, st);
    
    int length = st.length();
    for (int i = length - 1; i >= 0; --i) {
        cout << st[i];
    }
    
    return 0;
}