#include<bits/stdc++.h>
using namespace std;
bool removeSmallest(vector<int>& b, int a){
    for(int i=0; i<a-1; i++){
        if((b[i]-b[i+1]==1)){
            b.erase(b[i], b[i+1]);
        }
    }
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
    }
}