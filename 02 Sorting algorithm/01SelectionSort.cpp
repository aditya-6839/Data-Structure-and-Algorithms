#include<iostream>
using namespace std;

// Time complexity : O(n^2) for all three cases.

void SelectionSort(int arr[], int n) {
    int min;
    for(int i=0; i<n-1; i++) {
        min = i;
        for(int j=i; j<n; j++) {
            if(arr[j] < arr[i])  min=j;
        }
        swap(arr[i], arr[min]);
    }
}

int main() {
    int n = 6;
    int arr[n] = {6, 3, 2, 9, 1, 10};
    SelectionSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}