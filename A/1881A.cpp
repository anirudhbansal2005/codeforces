#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int counterAppend(string& s1, string& s2){
    int count = 0;
    for(int i=0; i<5; i++){
        
        
        if (s1.find(s2) != string::npos) {
            return count;
        }
        s1=s1.append(s1);
        count++;
    }
    return (s1.find(s2) != string::npos) ? count : -1;
}
int main(){
    fastio;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, m;
        bool check = 0;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        cout<<counterAppend(s1, s2)<<"\n";
    }
}