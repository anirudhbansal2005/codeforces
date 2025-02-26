#include<bits/stdc++.h>
using namespace std;
bool checkOddDivisor(long long x){
    if(x%2!=0 && x>2){
        return true;
    }
    for(int i=0; x>2; i++){
        x=x/2;
        if (x%2!=0 && x>2){
        return true;
    }
    
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        long long num;
        cin >> num;
        if(checkOddDivisor(num)){
            cout<<"YES\n";
        }      
        else {
            cout<<"NO\n";
        }
    }
}