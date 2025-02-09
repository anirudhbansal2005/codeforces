#include<bits/stdc++.h>
using namespace std;
void allDistinct(vector<int>& v, const int& x){
    sort(v.begin(), v.end());
    if(v.size()>3){
        v.erase(unique(v.begin(), v.end()), v.end());
        cout<<v.size()<<"\n";
    }
    else {
        v.erase(unique(v.begin(), v.end())-1, v.end());
        cout<<v.size()<<"\n";   
    }
}

int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int x;
        cin >> x;
        vector<int> v(x);
        for(int i=0; i<x; i++){
            cin >> v[i];
        }
        allDistinct(v, x);
    }
}