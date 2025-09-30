#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int xxor = 0;
    for(int val : nums)
        xxor = xxor ^ val;
    return xxor;
}

int main() {
    vector<int> nums = {4,1,2,1,2};

    auto result = singleNumber(nums);

    cout<< result << endl;

    return 0;
}