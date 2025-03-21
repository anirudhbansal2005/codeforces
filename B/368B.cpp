#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int distinctNumbers(vector<int> x, int y){
    unordered_set<int> s;
    for(int i=y; i<x.size(); i++){
        s.insert(x[i]);
    }
    return s.size();
}
int main(){
    fastio;
    int n, m, temp;
    cin >> n >> m;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> temp;
        cout<<distinctNumbers(a, temp)<<"\n";
    }
}