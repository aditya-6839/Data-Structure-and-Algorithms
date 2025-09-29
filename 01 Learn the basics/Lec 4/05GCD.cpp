#include<iostream>
#include<vector>
using namespace std;

int GCD(int n1,int n2) {
    int lg = max(n1, n2);
    int sm = min(n1, n2);
    int rem = 0;
    while (rem == 0) {
        rem = lg % sm;
        lg = sm;
        sm = lg / sm; 
    }
    return rem;
}

int main () {
    int num1 = 18;
    int num2 = 12;

    auto result = GCD(num1, num2);
    cout << result << endl;
    return 0;
}