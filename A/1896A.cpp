#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int j=0; j<t; j++){
        int n;
        cin >> n;
        vector<int> ser(n);
        for(int i=0; i<n; i++){
            cin >> ser[i];
        }
        if(ser[0]==1){
            cout<<"YES\n";
        }
        else  {
            cout<<"NO\n";
        }
    }
}