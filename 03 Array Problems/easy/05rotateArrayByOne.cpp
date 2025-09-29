#include<iostream>
#include<vector>
using namespace std;

void rotateArrayByOne(vector<int>& nums) {
    int temp = nums[0];
    int n = nums.size();
    for(int i=1; i<n; i++) {
        nums[i-1] = nums[i];
    }
    nums[n-1] = temp;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    rotateArrayByOne(nums);
    for(int i : nums) {
        cout<< i  << "  ";
    }

    return 0;
}