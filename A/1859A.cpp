#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, mn = INT_MIN;
        cin >> n;
        vector<int> a(n), b, c;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]>mn){
                mn = max(mn, a[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(a[i]%mn==0){
                c.push_back(a[i]);
            }
            else {
                b.push_back(a[i]);
            }
        }
        if(b.size() >=1 && c.size()>=1){
            cout<<b.size()<<" "<<c.size()<<"\n";
            for(int i=0; i<b.size(); i++){
                cout<<b[i]<<" ";
            }
            cout<<"\n";
            for(int i=0; i<c.size(); i++){
                cout<<c[i]<<" ";
            }
            cout<<"\n";
        }
        else {
            cout<<"-1\n";
        }
    }
}