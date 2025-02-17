#include<bits/stdc++.h>
using namespace std;
int indexOfUniqueNumber(vector<int> x, int y){
    for(int i=0; i<x.size(); i++){
        if(x[i]==y){
            return i;
        }
    }    
}
int uniqueNumber(vector<int> x, int y){
    sort(x.begin(), x.end());
    unique(x.begin(), x.end());
    if(x[0] != x[1] && x[0]!=x[2]){
        return x[0];
    }
    else {
        return x[1];
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
        cout<<indexOfUniqueNumber(b, uniqueNumber(b, a))+1<<"\n";
    }
}