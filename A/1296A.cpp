#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int l, temp, sum=0;
        cin >> l;
        for(int i=0; i<l; i++){
            cin >> temp;
            sum+=temp;
        }
        if(sum%2!=0){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}