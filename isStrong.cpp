#include <iostream>
using namespace std;

int f[10];

void precompute(){
    f[0] = f[1] = 1;
    for(int i = 2; i < 10; ++i){
        f[i] = f[i-1] * i;
    }
}

bool isStrong(int x){
    int temp = x;
    int factSum = 0; // Initialize factSum
    while(temp){
        factSum += f[temp % 10];
        temp /= 10;
    }
    return (factSum == x);
}

int main(){
    precompute();
    int x;
    cin >> x;
    isStrong(x) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}