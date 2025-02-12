#include<bits/stdc++.h>
using namespace std;
bool compareString(char x){
    string y = "codeforces";
    for(int i=0; i<y.size(); i++){
    if(y[i]==x){
        return true;
    }
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        char a;
        cin >> a;
        if(compareString(a)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}