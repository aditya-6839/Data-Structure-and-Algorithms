#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

// Time complexity of map is log(n) in all three cases
// Time complexity of unordered_map is O(1) in best and avg cases and o(N) in worst case.


int main () {


    //  map in integer
    int arr[] = {1, 3, 1, 2, 1, 5, 7, 12, 14};

    map<int, int> mp;

    for(int i=0; i<(sizeof(arr)/4); i++) {
        mp[arr[i]]++;
    }
    // for(auto it : mp) {
    //     cout << it.first << " -> " << it.second <<endl;
    // }
    // cout << mp[1] << endl;
    
    


    // map in string 
    
    string s = "ajdchbskajkrhfdsuieiupoqkjbxhfeydtfwdy28736283683";
    unordered_map<char, int> mpp;
    
    for(int i=0; i<s.size(); i++) {
        mpp[s[i]]++;
    }
    
    for(auto it : mpp) {
        cout << it.first << " -> " << it.second <<endl;
    }
    return 0;
}