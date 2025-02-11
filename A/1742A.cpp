#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases, mx, a, b, c;
    cin >> cases;
    for(int i=0; i<cases; i++){
        cin >> a >> b >> c;
        if(a+b==c || a+c==b || b+c==a){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}