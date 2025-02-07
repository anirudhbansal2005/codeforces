#include<bits/stdc++.h>
using namespace std;
int sqaureString(string x){
    int length = x.size();
    bool checkFlag=1;
    int half = length/2;
    if((length%2)!=0){
        checkFlag = 0;
    }
    else {
        for(int i=0; i<(length/2); i++){
            if(x[i]!=x[half]){
                checkFlag = 0;
                break;
            }
            half++;
        }
    }
    return checkFlag;
}

int main(){
    int cases;
    string eq;
    cin >> cases;
    for(int i=0; i<cases; i++){
        cin >> eq;
        if(sqaureString(eq)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}