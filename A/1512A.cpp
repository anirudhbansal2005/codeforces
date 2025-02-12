#include<bits/stdc++.h>
using namespace std;
void uniqueNumber(vector<int> x, int y){
    for(int j=0; j<y; j++){
        for(int i=j+1; i<y; i++){
        if(x[j]!=x[i]){
           cout<<i<<"\n";
           break;      
            }
        }
    }
}
vector<int> initializeVector(int x){
    vector<int> y(x);
    for(int i=0; i<x; i++){
        cin >> y[i];
    }
    return y; 
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a;
        cin >> a;
        vector<int> b = initializeVector(a);
        uniqueNumber(b, a);
    }
}