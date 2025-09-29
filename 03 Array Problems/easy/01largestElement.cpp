#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int largestElement(vector<int>& nums) {
    int max = INT_MIN;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > max) max = nums[i];
    }
    return max;
}
int main() {
    vector<int> nums = {3, 3, 6, 1};

    auto result = largestElement(nums);

    cout<< result << endl;

    return 0;
}