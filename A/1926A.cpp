#include<bits/stdc++.h>
using namespace std;
int stringCheck( string x){
    int length  = x.size();
    int countA=0;
    int countB=0;
    bool checkFlag = 0;
    for(int i=0; i<length; i++){
        if(x[i]=='A'){
            countA++;
        }
        else{
            countB++;
        }
    }
    if(countA>countB){
        checkFlag = 1;
    }
    return checkFlag;
}

int main(){
    int cases;
    string inp;
    cin >> cases;
    for(int i=0; i<cases; i++){
        cin >> inp;
        if(stringCheck(inp)){
            cout<<"A\n";
        }
        else {
            cout<<"B\n";
        }
    }

}