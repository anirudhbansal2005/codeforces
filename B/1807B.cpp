#include<bits/stdc++.h>
using namespace std;
bool grabCandies(vector<int> x){
    int oddSum = 0, evenSum = 0;
    for(int i=0; i<x.size(); i++){
        if(x[i]%2==0){
            evenSum+=x[i];
        }
        else {
            oddSum+=x[i];
        }
    }
    if(evenSum>oddSum){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int s;
        cin >> s;
        vector<int> d(s);
        for(int j=0; j<s; j++){
            cin >> d[j];
        }
    if(grabCandies(d)){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
    }
}