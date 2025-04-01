#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> x){
    for(int i=0; i<x.size()-1; i++){
        if(x[i]>x[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t; 
    for(int i=0; i<t; i++){
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for(int j=0; j<n; j++){
            cin >> h[j];
        }
        if(isSorted(h)){
            cout<<"YES\n";
        }
        else {
            if((n>=3 && k>1) || (k==n && k>1)){
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
        }
    }
}