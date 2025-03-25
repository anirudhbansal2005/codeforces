#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, k;
        bool check = 0; 
        cin >> n >> k;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if(temp==k){
                check = 1;
            }
        }
        if(check){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}
