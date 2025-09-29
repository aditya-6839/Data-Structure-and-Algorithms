#include<iostream>
#include<vector>
using namespace std;
void printNumbers(int i, int n){
   if(i>n) return;
   cout<<i<<endl;
   printNumbers(i+1,n);
}

void printReverseNumbers(int i, int n){
   if(i>n) return;
   cout<<n<<endl;
   printReverseNumbers(i,n-1);
}

int main () {
    printNumbers(1, 11);
    printReverseNumbers(1,11);
    return 0;
}