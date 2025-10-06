#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

// vector<int> majorityElement(vector<int>& nums) {
//     unordered_map<int, int> mp;
//     vector<int> ans;
//     int n = nums.size();
//     for(int i : nums)
//         mp[i]++;
//     for(auto it : mp) {
//         if(it.second > n/3) ans.push_back(it.first);
//     }
//     return ans;
// }

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    int cand1 = 0, cand2 = 1;
    int cnt1 = 0, cnt2 = 0;
    for(int num : nums) {
        if(num == cand1) cnt1++;
        else if(num == cand2) cnt2++;
        else if(cnt1 == 0) {
            cand1 = num;
            cnt1 = 1;
        }
        else if(cnt2 ==  0) {
            cand2 = num;
            cnt2 = 1;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }

    // for verfication
    cnt1 = cnt2 = 0;
    for(int num : nums) {
        if(num == cand1) cnt1++;
        if(num == cand2) cnt2++;
    }

    vector<int> ans;
    if(cnt1 > n/3) ans.push_back(cand1);
    if(cnt2 > n/3) ans.push_back(cand2);

    return ans;
}

int main() {
    vector<int> nums ={3,2,3};
    auto result = majorityElement(nums);
    for(auto i : result) {
        cout << i << "  ";
    }
    return 0;
}