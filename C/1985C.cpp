#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int s;
        cin >> s;
        vector<int> a(s);
        for(int i=0; i<s; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        if(a[s-1]!=0){
            a.emplace_back(0);
        }
        int sum = accumulate(a.begin()+1, a.end(), 0);
        if(a[0]==sum){
            cout<<
        }
    }
}