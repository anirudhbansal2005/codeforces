#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, k, m, sum = 0;
        
        bool check = 0;
        cin >> n >> k >> m;
        vector<int> sp;
        int c = n;
        if(m!=1 && k>=1){
            sp.insert(sp.begin(), n, 1);
        }
        else  if(m==1 && k>=2 && n%2==0){
            sp.insert(sp.begin(), n/2, 2);
        }
        else  if(m==1 && k>=3 && n%2!=0){
            sp.insert(sp.begin(), (n/2)-1, 2);
            sp.push_back(3);
        }
        else {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        cout<<sp.size()<<"\n";
        for(int i=0; i<sp.size(); i++){
            cout<<sp[i]<<" ";
        }
        cout<<"\n";
    }
}