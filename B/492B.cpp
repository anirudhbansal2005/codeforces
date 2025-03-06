#include<bits/stdc++.h>
using namespace std;
int main(){
    double l, d, c=0, c2=0;
    double mx = 0;
    cin >> l >> d;
    vector<double> ls(l);
    for(int i=0; i<l; i++){
        cin >> ls[i];
    }
    sort(ls.begin(), ls.end());
    if(ls[0]!=0){
        c = ls[0];
    }
    if(ls[l-1]!=d){
        c2 = d-ls[l-1];
    }
    for(int i=0; i<l-1; i++){
        mx = max((ls[i+1]-ls[i])/2, mx);
    }
    cout << fixed << setprecision(10) << max({mx, c, c2}); 
}