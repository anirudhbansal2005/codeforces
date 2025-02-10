#include<bits/stdc++.h>
using namespace std;
string checkTask(const int& x,string& y){
    string s = "YES";
    for(int i=0; i<x; i++){
        for(int j=1; j<x; i++)
        if(y[i]==y[j]){
            s = "NO";
            return s;
        }
    }
    return s;
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int length;
        string str;
        cin >> length >> str;
        str.erase(unique(str.begin(), str.end()), str.end());
        length = str.length();
        cout<<checkTask(length, str)<<"\n";
        
    }
}