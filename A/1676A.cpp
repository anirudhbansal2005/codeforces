#include<bits/stdc++.h>
using namespace std;
bool luckyNumber(string x){
    int y = 0;
    int z = 0;
    for(int i=0; i<x.size(); i++){
        if(i<3){
            y += (x[i]) - '0';
        }
        else {
            z += (x[i]) - '0';
        }
    }
    return y==z;
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        string v;
        cin >> v;
        if(luckyNumber(v)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}
