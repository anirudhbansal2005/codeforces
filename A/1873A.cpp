#include<bits/stdc++.h>
using namespace std;
bool checkString(const string& x){
    bool checkStr = 0; 
        if(x[0]=='a' || x[1]=='b' || x[2]=='c'){
            checkStr = 1;
        }
    return checkStr;
}

int main(){
    int cases;
    cin >> cases;
    string s;
    for(int i=0; i<cases; i++){
        cin >> s;
        cout<<(checkString(s) ? "YES" : "NO") << "\n";
    }
}