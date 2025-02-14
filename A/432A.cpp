#include<bits/stdc++.h>
using namespace std;
int main(){
    int l, k;
    cin >> l >> k;
    vector<int> g(l);
    for(int i=0; i<l; i++){
        cin >> g[i];
    }
    int count = 0;
    sort(g.begin(), g.end());
    for(int i=0; i<l; i++){
        if(g[i]<=5-k){
            count++;
        }
    }
    cout<<count/3;
}