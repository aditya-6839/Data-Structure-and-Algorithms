#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondLargestElement(vector<int>& nums) {
    int max = INT_MIN;
    int sec = max;
    for(int i=0 ; i<nums.size(); i++) {
        if(max < nums[i] && sec < nums[i]) {
            sec = max;
            max = nums[i];
        } else if(sec < nums[i] && max > nums[i]) {
            sec = nums[i];
        }
    }
    if(sec < 0) return -1;
    return sec;
}

int main() {
    vector<int> nums = {10, 10, 10, 10, 10};

    auto result = secondLargestElement(nums);

    cout<< result << endl;

    return 0;
}