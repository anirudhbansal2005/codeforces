#include<bits/stdc++.h>
using namespace std;
int blankSpace(const vector<int>& v, const int& x){
    int blank = 0, mx = 0;
    for(int i=0; i<x; i++){
        if(v[i]==0){
            blank++;
            mx = max(mx, blank);
        }
        else {
            blank=0; 
        }
    }
    return mx;
    
}

int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int x;
        cin >> x;
        vector<int> y(x);
        for(int j=0; j<x; j++){
            cin >> y[j];
        }
        cout<<blankSpace(y, x)<<"\n";
    }
}