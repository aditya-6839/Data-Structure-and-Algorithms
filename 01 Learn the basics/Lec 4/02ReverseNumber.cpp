#include<iostream>
#include<vector>
using namespace std;

int reverseNumber(int n) {
        int rev = 0;
        while(n > 0) {
            rev = (rev*10) + (n%10);
            n = n / 10;
        }
        return rev;
    }

int main () {
    int num = 415;
    auto result = reverseNumber(num);
    cout << result << endl;
    return 0;
}