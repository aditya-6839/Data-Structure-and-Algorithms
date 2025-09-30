#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;
    for(int num : nums) {
        if(count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    auto result = majorityElement(nums);
    cout << result << endl;
    return 0;
}