#include <iostream>
#include <vector>
using namespace std;

vector<int> factorial(int n) {
    vector<int> result;
    result.push_back(1);

    for (int i = 2; i <= n; ++i) {
        int carry = 0;
        for (int j = result.size() - 1; j >= 0; --j) {
            int product = result[j] * i + carry;
            result[j] = product % 10; 
            carry = product / 10; 
        }
        while (carry) {
            result.insert(result.begin(), carry % 10);
            carry /= 10;
        }
    }
    
    return result;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    vector<int> result = factorial(num);

    cout << "Factorial of " << num << " is: ";
    for (int digit : result) {
        cout << digit;
    }

    return 0;
}
