#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0);
void changeArr(int l, int u, int e, vector<int>& x, long long y){
    long long sum1 = accumulate(x.begin()+l-1, x.begin()+u, 0);
    long long z = ((u - l + 1) * e);
    cout<<(((y-sum1+z)%2!=0) ? "YES\n" : "NO\n");
}
int main(){
    fastio;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, m;
        cin >> n >> m;
        int r1, r2, el;
        long long sum=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
        }
        for(int i=0; i<m; i++){
            cin >> r1>> r2>> el;
            changeArr(r1, r2, el, a, sum);    
        }
    }
}

// time complexity issue 
// use prefix sum 