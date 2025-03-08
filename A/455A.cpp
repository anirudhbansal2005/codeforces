#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> freqElement(vector<int>& x){
    unordered_map<int, int> freq;
    for(int i=0; i<x.size(); i++){
        freq[x[i]]++;
    }
    return freq;
}
int boredomGame(vector<int>& y){
        pair<int, int> mx = {0, INT_MIN};
        unordered_map<int, int> o = freqElement(y);
        for(auto i: o){
            if(i.second>=mx.second){
                mx.first = i.first;
                mx.second = i.second;
            }
        }
        
        
    }
int main(){
    int t;
    cin >> t;
    vector<int> y(t);
    for(int i=0; i<t; i++){
        cin >> y[i];
    }
    boredomGame(y);
}