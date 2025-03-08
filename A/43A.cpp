#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin >> s;
    string sg;
    unordered_map<string, int> o;
    for(int i=0; i<s; i++){
        cin >> sg;
        o[sg]++;    
    }
    pair<string, int> mx = {"0", INT_MIN};
    for(auto i: o){
        if(i.second > mx.second){
            mx.second = i.second;
            mx.first = i.first;
        }
    }
    cout<<mx.first;
}