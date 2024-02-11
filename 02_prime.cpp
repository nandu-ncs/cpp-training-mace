#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 5,f = 1;
    
    if (n<=1) {
        f = 0;
    }
    else {
        for (int i=2; i<=sqrt(n); i++) {
            if (n%i==0) {
                f = 0;
                break;
            }
        }
    }
    
    if (f==0)
        cout<<n<<" is not Prime";
    else
        cout<<n<<" is Prime";
        
    return 0;
}