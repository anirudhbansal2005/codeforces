#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, count=0;
    cin >> t;
    vector<pair<int, int>> games(t);
    for(int i=0; i<t; i++){
        cin >> games[i].first >> games[i].second;
    }
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            if(games[j].first == games[i].second){
                count++;
            }
        }
    }
    cout<<count;

}