#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main () {
    bool result = isPrime(5);
    cout << result << endl;
    return 0;
}