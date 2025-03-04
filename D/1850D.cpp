#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k, p;
    cin >> t;
    for(int q=0; q<t; q++){
    cin >> n >> k;
        vector<int> a(n);
        
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vector<int> b = a;
        sort(b.begin(), b.end(), greater<int>());
        int countforward = 0, countbackward = 0;
        sort(a.begin(), a.end());
        for(int i=0; i<a.size()-1; ++i){
            if(a[i+1]-a[i]>k){
                a.erase(a.begin()+i, a.begin()+i+1);
                i = max(-1, i - 1);
                countforward++;
            }
        }
        
        for(int i=0; i<b.size()-1; ++i){
            if(b[i]-b[i+1]>k){
                b.erase(b.begin()+i, b.begin()+i+1);
                i = max(-1, i - 1);
                countbackward++;
            }
        }
        cout<<min(countbackward, countforward)<<"\n";
    }
}