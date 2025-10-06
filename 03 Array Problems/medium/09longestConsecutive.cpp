#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    unordered_set<int> st;
    for(int i=0; i<nums.size(); i++){
        st.insert(nums[i]);
    }
    int longest = 1;
    int count = 1;
    for(auto it : st) {
        if(st.find(it-1) == st.end()) {
            count = 1;
            int x = it;
            while(st.find(x+1) != st.end()) {
                x++;
                count++;
            }
            longest = max(longest, count);
        } 
    }
    return longest;
}

int main() {
    vector<int> nums = {100,4,200,1,3,2};
    auto result = longestConsecutive(nums);
    cout << result << endl;
    return 0;
}