#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = -1;
    for(int i=0; i<n; i++){
        if(nums[i] == 0) {
            j = i;
            break;
        }
    }
    if(j == -1) return;

    for(int i=j+1; i<n; i++) {
        if(nums[i] != nums[j]) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 4, 0, 5, 2};

    moveZeroes(nums);

    for( int val : nums) {
        cout<< val << "  ";
    }

    return 0;
}