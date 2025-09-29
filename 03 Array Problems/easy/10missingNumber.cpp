#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = (n*(n+1))/2;
    int arraySum = 0;
    for(int val : nums)
        arraySum += val;
    
    int missingNum = sum - arraySum;
    return missingNum;
}

int main() {
    vector<int> nums = {9,6,4,2,3,5,7,0,1};

    auto result = missingNumber(nums);

    cout<< result << endl;

    return 0;
}