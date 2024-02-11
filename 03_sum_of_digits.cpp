#include <iostream>
using namespace std;

int main() {
    int n = 123,sum = 0;
    
    while (n>0) {
        sum += n%10;
        n = int(n/10);
    }
    
    cout<<"Sum of digits: "<<sum;
        
    return 0;
}