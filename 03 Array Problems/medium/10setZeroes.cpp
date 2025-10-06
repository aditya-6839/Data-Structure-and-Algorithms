#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    unordered_set<int> setI;
    unordered_set<int> setJ;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(matrix[i][j] == 0) {
                setI.insert(i);
                setJ.insert(j);
            }
        }
    }

    for(auto it : setI) {
        for(int j=0; j<n; j++) {
            matrix[it][j] = 0;
        }
    }
    
    for(auto it : setJ) {
        for(int i=0; i<m; i++) {
            matrix[i][it] = 0;
        }
    }

}

int main() {
    vector<vector<int>> nums = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(nums);
    for(auto i : nums) {
        for (auto j : i) {
            cout << j << "  ";
        }
        cout << endl;
    }
    return 0;
}