#include<bits/stdc++.h>
using namespace std;
bool compareString(string x){
    for(int i=0; i<x.size(); i++){
        if(x[i]=='H' || x[i] == 'Q' || x[i] == '9' || x[i] == '+'){
            return true;
        }
    }
    return false;
}
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout<<(compareString(s) ? "YES" : "NO");
}