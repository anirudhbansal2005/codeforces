#include<bits/stdc++.h>
using namespace std;
void distinctLetters(string x){
    unordered_set<char> a;
    for(int i=0; i<x.size(); i++){
        a.insert(x[i]);
    }
    cout<<a.size();
}
int main(){
    string str;
    cin >> str;
    distinctLetters(str);
}