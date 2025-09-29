#include<iostream>
#include<vector>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    vector<int> Union;
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        if(nums1[i] <= nums2[j]) {
            if(Union.empty() || Union.back() != nums1[i])
                Union.push_back(nums1[i]);
            i++;
        } else {
            if(Union.empty() || Union.back() != nums2[j])
                Union.push_back(nums2[j]);
            j++;
        }
    }
    while( i < n1) {
        if(Union.back() != nums1[i])
            Union.push_back(nums1[i]);
        i++;
    }
    while( j < n2) {
        if(Union.back() != nums1[j])
            Union.push_back(nums1[j]);
        j++;
    }
    return Union;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};

    vector<int> result = unionArray(nums1, nums2);
    for( int val : result) {
        cout<< val << "  ";
    }

    return 0;
}