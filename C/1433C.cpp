#include<bits/stdc++.h>
using namespace std;
auto itMax(vector<int> x, int y){
    pair<int, int> mx = {x[0], 0};
    for(int i=0; i<y; i++){
        if(mx.first<x[i]){
            mx.first = x[i];
            mx.second = i;
        }
    }
    return mx;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int size;
        cin >> size;
        vector<int> pirana(size);
        for(int i=0; i<size; i++){
            cin >> pirana[i];
        }
        pair<int, int> mx = itMax(pirana, size);
        for(int i=1; i<pirana.size(); i++){
            if(pirana[mx.second]>pirana[mx.second+1] ){
                cout<<mx.second+1<<"\n";
                break;
            }
            else if(pirana[mx.second]>pirana[mx.second-1]){
                cout<<mx.second-1<<"\n";
                break;
            }
            else if(pirana[mx.second]==pirana[mx.second-i] && pirana[mx.second-i]>pirana[mx.second-i-1]){
                cout<<mx.second-i<<"\n";
                break;
            }
            else if((pirana[mx.second]==pirana[mx.second+i] && pirana[mx.second+i]>pirana[mx.second+i+1])){
                cout<<mx.second+i+1<<"\n";
                break;
            }
            
            else{
                cout<<-1<<"\n";
                break;
            }
        }
    }
}