#include<bits/stdc++.h>
using namespace std;
void Absorption(int& x){
    x = (x/2)+10;
}
void lightningStrike(int& x){
    x = x - 10;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int x, n, m;
        cin >> x >> n >> m;
        for(int j=0; j<n; j++){
            if(x>=21){ 
                Absorption(x);
            }
            else {
                break;
            }
        }
        for(int j=0; j<m; j++){
           if(x>0){ 
           lightningStrike(x);
            }
            else {
                break;
            }
        }
        if(x<=0){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}