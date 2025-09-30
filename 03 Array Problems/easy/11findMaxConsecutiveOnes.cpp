#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int max = 0;
    int j = 0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == 1) {
            j++;
            if(j > max) max = j;
        } else {
            j = 0;
        }
    }
    return max;
}

int main() {
    vector<int> nums = {1,1,0,1,1,1};

    auto result = findMaxConsecutiveOnes(nums);

    cout<< result << endl;

    return 0;
}