#include<bits/stdc++.h>
using namespace std;
void compatibleWeather(){
    vector<pair<int, int>> p;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(y[i]-z[j]<=k){
                p[i].first = z[j];
                p[i].second = y[i]-y[j];
            }
        }
    }
}
void compareWeather(int x, int k, vector<int> y, vector<int> z){
    bool isTrue = true;
    string str =  "";
    for(int i=0; i<x; i++){
        if(abs(y[i]-z[i])>k){
            isTrue = false;
            break;
        }
        else {
            str+= to_string(z[i]) + " ";
        }
    }

    if(isTrue){
        cout<<str<<"\n";
    }
}
void arrInp(int x, vector<int>& y){
    for(int i=0; i<x; i++){
        cin >> y[i];
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, k;
        cin >> n >> k;
        vector<int> x(n), y(n);
        arrInp(n, x);
        arrInp(n, y);


        sort(y.begin(), y.end());
        compareWeather(n, k, x, y);
    }
}