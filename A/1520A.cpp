#include<bits/stdc++.h>
using namespace std;
bool checkTask(const int& x, string& y){
    int k = 1;
    for(int i=0; i<x; i++){
        for(int j=k; j<x; j++)
        if(y[i]==y[j]){
            return false;
        }
        k++;
    }
    return true;
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
        if(checkTask(length, str)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
        
    }
}