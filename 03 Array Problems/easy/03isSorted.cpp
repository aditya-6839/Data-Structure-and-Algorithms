#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>& nums){
	for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[i] > nums[j]) return false;
        }
    }
    return true;
}


int main() {
    vector<int> nums = {1,9,6,8,5,4,0};

    auto result = isSorted(nums);

    cout<< result << endl;

    return 0;
}