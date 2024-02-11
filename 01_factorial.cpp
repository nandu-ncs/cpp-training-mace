#include <iostream>
using namespace std;

int main() {
    int n = 5, res = 1;
    
    for(int i=1; i<=n; i++) {
        res *= i;
    }
    
    cout<<"Factorial of "<<n<<" is "<<res;
        
    return 0;
}