#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int& x){
    int sum = 0;
    for(int i=0; x!=0;i++){
        sum += x%10;
        x/=10;
    }
    return sum;
}

int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int k;
        cin >> k;
        cout<<sumOfDigits(k)<<"\n";
    }
}