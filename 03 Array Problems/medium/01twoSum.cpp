#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for(int i=0; i<nums.size(); i++) {
        int a = target - nums[i];
        if(mp.find(a) != mp.end()) {
            return {mp[i], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {3,2,4};
    auto result = twoSum(nums, 6);
    for(int i : result) {
        cout<< i << "  ";
    }
    return 0;
}