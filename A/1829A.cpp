#include<bits/stdc++.h>
using namespace std;
const string y = "codeforces";
int stringDiff(const string& x){
    int count = 0;
    for(int i=0; i<10; i++){
        if(x[i]!=y[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int cases;
    cin >> cases;
    string s;
    for(int i=0; i<cases; i++){
        cin >> s;
        cout<<stringDiff(s)<<"\n";
    }
}