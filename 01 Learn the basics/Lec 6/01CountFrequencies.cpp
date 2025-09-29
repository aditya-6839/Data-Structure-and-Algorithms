#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums) {
    vector<vector<int>> ans;
    unordered_map<int, int> mp;
    for(int i=0; i<nums.size(); i++) {
        mp[nums[i]]++;
    }
    for(auto it : mp){
        ans.push_back({it.first, it.second});
    }
    return ans;
}

int main () {
    vector<int> arr = {1, 2, 2, 1, 3};
    auto result = countFrequencies(arr);
    for(auto val : result) {
        for(auto in : val) {
            cout << in << "  ";
        }
        cout << endl;
    }
    return 0;
}