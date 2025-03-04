#include<bits/stdc++.h>
using namespace std;
bool bobTurn(string& s){
    for(int i=0; i<s.size(); i++){
        if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1')){
            s.erase(s.begin()+i, s.begin()+i+2);
            return false;
        }
    }
    return true;
}
bool aliceTurn(string& s){
    for(int i=0; i<s.size(); i++){
        if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1')){
            s.erase(s.begin()+i, s.begin()+i+2);
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string s;
        cin >> s;
        for(int i=1; i>=0; i++){
            if(aliceTurn(s)){
                cout<<"NET\n";
                break;
            }
            if(bobTurn(s)){
                cout<<"DA\n";
                break;
            }
        }
    }
}