#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int m = matrix.size();
    for(int i=0; i<m; i++) {
        for(int j=0; j<i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0; i<m; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> nums = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    rotate(nums);
    for(auto i : nums) {
        for (auto j : i) {
            cout << j << "  ";
        }
        cout << endl;
    }
    return 0;
}