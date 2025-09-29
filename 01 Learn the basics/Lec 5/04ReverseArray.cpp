#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << "  ";
    }
}

void reverseArray(int arr[], int n){
    int ans[n];
    for(int i=0; i<n; i++) {
        ans[i] = arr[n-i-1];
    }
    printArray(ans, n);
}


int main () {
    int n =5;
    int arr[n] = {1, 2, 3, 4, 5};
    reverseArray(arr, n);
    return 0;
}