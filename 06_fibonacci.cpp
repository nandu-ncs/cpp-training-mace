#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of terms: ";
    cin >> n;

    int fib1 = 0, fib2 = 1;
    
    if (n<=0)
        return 0;
    else if (n==1) {
        cout << "Fibonacci Series up to " << n << " terms: ";
        cout << fib1 << " ";
    }
    else {
        cout << "Fibonacci Series up to " << n << " terms: ";
        cout << fib1 << " " << fib2 << " ";
        for (int i = 2; i < n; ++i) {
            int fib3 = fib1 + fib2;
            cout << fib3 << " ";
            fib1 = fib2;
            fib2 = fib3;
        }
    }

    return 0;
}
