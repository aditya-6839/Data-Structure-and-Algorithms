#include<iostream>
#include<vector>
using namespace std;

int longestSubarray(vector<int> &nums, int k){
    int i = 0, j = 0;
    int sum = 0;
    int temp = 0;
    int count = 0;
    while(j < nums.size()) {
        if(k > sum) {
            sum += nums[j];
            j++; 
            temp++;
        } else if(k < sum) {
            sum = 0;
            temp = 0;
            i++;
            j = i;
        } else {
            count = max(count, temp);
            sum = 0;
            temp = 0;
            i++;
            j = i;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    auto result = longestSubarray(nums, k);

    cout<< result << endl;

    return 0;
}