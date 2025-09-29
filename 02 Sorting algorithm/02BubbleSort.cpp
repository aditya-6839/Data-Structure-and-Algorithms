#include<iostream>
using namespace std;

// Time complexity : O(n) for best case.
//                   O(n^2) for worst and avg cases.

void BubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int n = 6;
    int arr[n] = {6, 3, 2, 9, 12, 10};
    BubbleSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}