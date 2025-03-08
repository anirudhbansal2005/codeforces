#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, k, p, nd;
        cin >> n >> k;
        nd = k;
        for(int j=0; j>=0; j++){ 
            p = nd/n;   
            if((k+p)%n!=0){
                break;
            }
            else {
                nd+=p;
            }
        }
        cout<<k+p<<"\n";
    }
}