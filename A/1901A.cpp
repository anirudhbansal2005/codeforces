#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int s, x;
        int mx = INT_MIN;
        cin >> s >> x;
        vector<int> st(s+1);
        st[0]=0;
        for(int i=1; i<=s; i++){
            cin >> st[i];
        }
        for(int i=1; i<=s; i++){
            if(st[i]-st[i-1]>mx && s>1){
                mx = st[i]-st[i-1];
            }
        }
        if(s==1){
            mx = st[s];
        }
        int last = 2*(abs(st[s]-x));
        cout<<max(last, mx)<<"\n";
    }
}