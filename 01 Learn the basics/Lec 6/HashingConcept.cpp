#include<iostream>
#include<functional>
using namespace std;

int main () {
    // int arr[] = {1, 3, 1, 2, 1, 5, 7};

    // int hash[20] = {0};
    // for(int i=0; i<7; i++) {
    //     hash[arr[i]] += 1; 
    // }
    // cout << hash[1] << endl;
    // cout << hash[2] << endl;
    // cout << hash[5] << endl;
    
    string s = "abcdefghijklmaaaanoAAAAAArtgbaaddwxyz";
    int hash[26] = {0};
    
    for(int i=0; i<s.size(); i++) {
        hash[s[i] - 'a']++;
    }
    cout << hash['a'-'a'] << endl;
    cout << hash['b'-'a'] << endl;
    cout << hash['d'-'a'] << endl;
    cout << hash['g'-'a'] << endl;
    return 0;
}