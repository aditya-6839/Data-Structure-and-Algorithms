#include<iostream>
#include<vector>
using namespace std;

int NnumbersSum(int N){
	if(N < 1) return 0;
    return N + NnumbersSum(N-1);
}

int main () {
    

    auto result = NnumbersSum(10);
    cout << result << endl;
    return 0;
}