#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int>& nums, int low, int high) {
    while (low < high) {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
}

void rotateArrayByKthElement (vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;
    
    // Right shift
    reverseArray(nums, 0, n-1);
    reverseArray(nums, 0, k);
    reverseArray(nums, k+1, n-1);

    // Left shift
    // reverseArray(nums, 0, k);
    // reverseArray(nums, k+1, n-1);
    // reverseArray(nums, 0, n-1);
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;

    for(int i=0; i<k; i++) {
        int temp = nums[n-1];
        for(int j=n-1; j>0; j--) {
            nums[j] = nums[j-1];
        }
        nums[0] = temp;
    }
}

int main() {
    vector<int> nums = {-1,-100,3,99};

    // rotateArrayByKthElement(nums, 2);
    rotate(nums, 2);

    for( int val : nums) {
        cout<< val << "  ";
    }

    return 0;
}