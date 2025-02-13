#include<bits/stdc++.h>
using namespace std;
void uniqueNumber(vector<int> x, int y){
    for(int i=0; i<y-1; i++){
        if(x[i]!=x[i+1]){
           cout<<i<<"\n";
           break;      
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