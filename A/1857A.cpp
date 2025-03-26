#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, sum=0, temp;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> temp;
            sum+=temp;
        }
        if(sum%2==0){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}