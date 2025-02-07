#include<bits/stdc++.h>
using namespace std;

bool foo(const vector<int>& v, const int& x){
    for(int i=0; i<x; i+=2){
        if((v[i])!=v[0]){
            return false;
        }
    }
    for(int i=1; i<x; i+=2){
        if((v[i])!=v[1]){
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