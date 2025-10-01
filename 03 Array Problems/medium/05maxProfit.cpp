#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int profit = 0;
    int i = 0;
    int j = 1;
    while(j < prices.size()) {
        int profit = prices[j] - prices[i];
        maxProfit = max(maxProfit, profit);
        if(prices[i] > prices[j]) i = j;
        j++;
    }
    return maxProfit;
}

int main() {
    vector<int> nums = {7,1,5,3,6,4};
    auto result = maxProfit(nums);
    cout << result << endl;
    return 0;
}