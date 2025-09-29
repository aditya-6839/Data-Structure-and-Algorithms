#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isArmstrong(int n) {

    int count = 0;
    int temp = n;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    int sum = 0;
    temp = n;
    while(temp > 0) {
        int digit = temp % 10;
        sum += round(pow(digit,count));
        temp /= 10;
    }
    return (sum == n);
}

int main () {
    bool result = isArmstrong(152);
    cout << result << endl;
    return 0;
}