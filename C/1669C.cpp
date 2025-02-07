#include<bits/stdc++.h>
using namespace std;

bool foo(const vector<int>& v, const int& x){
    int even_parity = v[0]%2;
    int odd_parity = v[1]%2;
    for(int i=0; i<x; i+=2){
        if((v[i]%2)!=even_parity){
            return false;
        }
    }
    for(int i=1; i<x; i+=2){
        if((v[i]%2)!=odd_parity){
            return false;
        }
    }
    return true;
}

int main(){
    int cases;
    cin >> cases;
    int x;
    
    for(int i=0; i<cases; i++){
        
        cin >> x;
        vector<int> y(x);
        for(int j=0; j<x; j++){
            cin >> y[j];
        }
        
        if(foo(y, x)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}