#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    for(long long i=0; i<t; i++){
        long long n, k;
        cin >> n >> k;
        if(n%2==0){
            cout<<"YES\n";
        }
        else {
            if(n>=k && k%2!=0){
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
        }
    }
}