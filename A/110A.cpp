#include<bits/stdc++.h>
using namespace std;
bool luckyNum(const string& x){
    int count=0;
    for(int i=0; i<x.size(); i++){
        if(x[i]=='4' || x[i]=='7'){
            count++;
        }
    }
    return (count == 4 ) || (count == 7);
}

int main(){
    string str;
    cin >> str;
    if(luckyNum(str)){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}