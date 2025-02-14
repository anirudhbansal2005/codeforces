#include<bits/stdc++.h>
using namespace std;
bool stringCompare(string x, string y, int z){
    for(int i=0; i<z; i++){
        if((x[i]=='R' && y[i]=='G') || (x[i]=='R' && y[i]=='B') || (x[i]=='B' && y[i]=='R') || (x[i]=='G' && y[i]=='R'))
            return false;
    }
    return true;
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int l;
        string s1, s2;
        cin >> l >> s1 >> s2;
        if(stringCompare(s1, s2, l)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}