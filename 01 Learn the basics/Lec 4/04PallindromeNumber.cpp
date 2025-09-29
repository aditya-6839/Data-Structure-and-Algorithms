#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int n) {
    int rev = 0;
    int temp = abs(n);
    while(temp > 0) {
        rev = (rev*10) + (temp%10);
        temp /= 10;
    }
    return (rev == n);
}

int main () {
    int num = 404;
    int result = isPalindrome(num);
    cout << result << endl ;
    return 0;
}