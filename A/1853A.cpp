#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>& x){
    for(int i=0; i<x.size()-1; i++){
        if(x[i]>x[i+1]){
            return true;
        }
    }
    return false;
}
int arrayOperation(vector<int>& x){
    int count=0;
    for(int i=0; i<x.size(); i--){
        if(isSorted(x)){
            return count;
        }
        else {
            for(int i=0; i<x.size(); i++){
                if(i%2==0 ){
                    x[i]++;
                }
                else {
                    x[i]--;
                }
                count++;
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> l(n);
        for(int i=0; i<n; i++){
            cin >> l[i];
        }
        cout<<arrayOperation(l)<<"\n";
    }
}