#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        long long n, j=1;
        cin>>n;
        for(j=1; n%j==0; j++){
            n%j;
        }
        cout<<j-1<<"\n";
    }
}