#include <iostream>
using namespace std;

void ArmstrongNo(int N){
    int dup=N;
    int sum=0;
    while(N>0){
        int lastdigit= N%10;
        sum= sum+ (lastdigit* lastdigit* lastdigit);
        N=N/10;
    }
    if(sum==dup){
        cout<< dup<< "is an Armstrong No";
    }else{
        cout<< dup<< "is not an Armstrong No";
    }
}
int main(){
    int N;
    cout<< "Enter a number: ";
    cin>>N;
    ArmstrongNo(N);
    return 0;
}