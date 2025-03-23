#include<bits/stdc++.h>
using namespace std;
bool removeSmallest(vector<int>& b, int a){
    for(int i=0; i<a-1; i++){
        if(abs(b[i]-b[i+1])>1){
            return false;
        }
    }
    return true;
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int l;
        cin >> l;
        vector<int> a(l);
        for(int i=0; i<l; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if(removeSmallest(a, l)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    
}