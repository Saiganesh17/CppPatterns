#include <iostream>
using namespace std;

void primeNo(int n){
 int cnt=0;
 if(n<=1){
    cout<< n<< "is not prime";
    return;
 }
 for (int i=2;i*i <=n;i++){
    if(n%i ==0){
        cnt= cnt+1;
        break;
    }
 }
 if(cnt>0){
    cout<<n << "is not prime";
 } else{
    cout<<n << "is prime";
 }
}
int main(){
    int n;
    cin >>n;
    primeNo(n);
    return 0;
}