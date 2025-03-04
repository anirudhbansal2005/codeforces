#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin >> s;
    string x;
    cin >> x;
    for(int i=0; i<x.size()+1; i++){
        if((x[i]=='1' && x[i+1]=='0') || (x[i]=='0' && x[i+1]=='1')){
            x.erase(x.begin()+i, x.begin()+i+2);
            i = max(-1, i - 2);
        }
        
    }
    cout<<x.size();
}