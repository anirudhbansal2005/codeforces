#include<bits/stdc++.h>
using namespace std;
int checkString(string x){
    string name = "Timur";
    int slength = x.size();
    int len = name.size();
    bool checkFlag = 1;
    int j=0;
    sort(x.begin(), x.end());
    sort(name.begin(), name.end());
        if(slength!=5){
            checkFlag = 0;
        }
        else {
            for(int i=0; i<len; i++){
                if(name[i]!=x[i]){
                    checkFlag = 0;
                }
            }
        }
        return checkFlag;
}

int main(){
    int cases, ex;
    string n;
    cin >> cases;
    bool fl;
    for(int i=0; i<cases; i++){
        cin >> ex >> n;
        if(checkString(n)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}