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
        sort(a.begin(), a.end());
        vector<int> b = a;
        sort(b.begin(), b.end(), greater<int>());
        int countforward = 0, countbackward = 0;
        
        for(int i=0; i<a.size()-1; i++){
            if(a[i+1]-a[i]>k){
                a.erase(a.begin()+i, a.begin()+i+1);
                i = -1;
                countforward++;
            }
        }
        
        for(int i=0; i<b.size()-2; ++i){
            if(b.size()<2){
                break;
            }
            if(b[i]-b[i+1]>k){
                b.erase(b.begin()+i, b.begin()+i+1);
                i = -1;
                countbackward++;
            }
            if(b[b.size()-2]-b[b.size()-1]>k){
                b.erase(b.begin()+b.size()-1, b.begin()+b.size());
                countbackward++;
            }
        }
        cout<<min(countbackward, countforward)<<"\n";
    }
}