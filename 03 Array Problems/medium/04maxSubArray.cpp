#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<nums.size(); i++) {
        currSum += nums[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0) currSum = 0;
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2, -3, -7, -2, -10, -4};
    // vector<int> nums = {2, 3, 5, -2, 7, -4};
    auto result = maxSubArray(nums);

    cout << result << endl;

    
    return 0;
}