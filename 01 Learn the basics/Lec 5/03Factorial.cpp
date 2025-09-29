#include<iostream>
#include<vector>
using namespace std;
int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n-1);
}

int main () {
    
    auto result = fact(4);
    cout << result << endl;
    return 0;
}