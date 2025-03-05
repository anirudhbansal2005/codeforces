#include<bits/stdc++.h>
using namespace std;
void distinctLetters(string x){
    unordered_set<char> a;
    for(int i=1; i<x.size(); i+=3){
        a.insert(x[i]);
    }
    cout<<a.size();
}
int main(){
    string str;
    getline(cin, str);
    if(str.size()>2){
    distinctLetters(str);
    }
    else {
        cout<<0;
    }
}