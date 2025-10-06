#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    int rows = 0;
    while(rows < numRows) {
        int sz = rows + 1;
        ans.push_back(vector<int>());
        ans[rows].push_back(1);
        for(int i=1; i<sz-1; i++) {
            ans[rows].push_back(ans[rows-1][i]+ ans[rows-1][i-1]);
        }
        if(rows>0) ans[rows].push_back(1);
        rows++;
    }
    return ans;
}

int main() {
    int rows = 10;
    vector<vector<int>> result = generate(rows);
    for(auto vec : result) {
        for(auto i : vec) {
            cout << i << "  ";
        }
        cout << endl;
    }
    return 0;
}