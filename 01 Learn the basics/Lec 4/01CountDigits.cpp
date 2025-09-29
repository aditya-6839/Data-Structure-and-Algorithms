#include<iostream>
#include<vector>
using namespace std;

int countDigit(int n) {
    int count = 0;
    int temp = n;
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }
    return count;
}

int main () {
    int num = 100;
    int result = countDigit(num);
    cout << result << endl;
    return 0;
}