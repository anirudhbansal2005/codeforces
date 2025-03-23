#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, a, b;
        cin >> n >> a >> b;
        if(a+b<=n-2){
            cout<<"YES\n";
        }
        else if(a==b && a==n){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}