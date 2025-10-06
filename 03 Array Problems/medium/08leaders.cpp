#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    int max = nums[n-1];
    ans.push_back(nums[n-1]);
    for(int i=n-2; i>=0; i--) {
        if(nums[i] > max) {
            max = nums[i];
            ans.push_back(max);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 5, 3, 1, 2};
    auto result = leaders(nums);
    for(int i : result) {
        cout<< i << "  ";
    }
    return 0;
}