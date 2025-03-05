#include<bits/stdc++.h>
using namespace std;
int main(){
    int fr;
    cin >> fr;
    vector<pair<int, int>> p(fr);
    for(int i=0; i<fr; i++){
        p[i].second = i+1;
        cin >> p[i].first;
    }
    sort(p.begin(), p.end());
    for(int i=0; i<fr; i++){
        cout<<p[i].second<<" ";
    }
}