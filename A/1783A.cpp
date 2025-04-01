#include<bits/stdc++.h>
using namespace std;
int reorderElements(vector<int>& x){
    unique(sort(x.rbegin(), x.rend()), x.rend());
    return x;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> l(n);
        for(int j=0; j<n; j++){
            cin >> l[i];
        }

    }
}