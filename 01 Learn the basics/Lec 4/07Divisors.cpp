#include<iostream>
#include<vector>
using namespace std;

vector<int> divisors(int n) {
    vector<int> ans = {1};
    // for(int i=1; i<=n; i++) {
    //     if(n%i == 0) {
    //         ans.push_back(i);
    //     }
    // }

    for (int i=2; i*i<=n; i++) {
        if(n % i == 0) {
            ans.push_back(i);
            if(i != n/i) ans.push_back(n/i);
        }
    }

    return ans;
}

int main () {
    

    auto result = divisors(12);
    for(auto val : result) {
        cout << val << "  ";
    }
    return 0;
}