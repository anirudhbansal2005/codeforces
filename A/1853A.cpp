#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>& x){
    for(int i=0; i<x.size()-1; i++){
        if(x[i]>x[i+1]){
            return true;
        }
    }
    return false;
}
int arrayOperation(vector<int>& x){
    int mn = INT_MAX;
    if(isSorted(x)){
        return 0;
    }
    for(int i = 0; i<x.size()-1; i++){
        if(((abs(x[i]-x[i+1])/2)+1)<mn){
            mn = ((abs(x[i]-x[i+1])/2)+1);
        }
    }
    return mn;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> l(n);
        for(int j=0; j<n; j++){
            cin >> l[j];
        }
        cout<<arrayOperation(l)<<"\n";
    }
}