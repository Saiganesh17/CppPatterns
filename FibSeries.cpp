#include <iostream>
using namespace std;
void fibHelper(int n, int prev2, int prev1){
    if(n>0){
        cout<<prev2 << " ";
        fibHelper(n-1, prev1, prev2+prev1);
    }
}
void printFibSeries(int n){
    cout<< "Fibonacci series up to "<<n <<"terms: ";
    fibHelper(n,0,1);
}

int main(){
    int n;
    cin>> n;
    printFibSeries(n);
    return 0;
}