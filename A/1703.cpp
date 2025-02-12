#include<bits/stdc++.h>
using namespace std;
bool compareString(string x){
    for(int i=0; i<x.size(); i++){
        x[i] = tolower(x[i]);
    }
    if(x=="yes"){
        return true;
    }
    else {
    return false;
    }
}
int main(){
    int t;
    cin >> t;
    string s;
    for(int i = 0; i<t; i++){
        cin >> s;
        if(compareString(s)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}
