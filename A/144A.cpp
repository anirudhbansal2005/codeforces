#include<bits/stdc++.h>
using namespace std;
void swapRequired(int& x, int& y, vector<int>& z){
    int count = 0;
    for(int i=z.size(); i>0; i--){
        if(x==z[i]){
            swap(z[i-1], z[i]);
            count++;
        }
    }
    for(int i=0; i<z.size(); i++){
        if(y==z[i] && i<z.size()-1){
            if(z[i]==z[i+1]){
                continue;
            }
            else {
                swap(z[i], z[i+1]);
                count++;
            }
        }
    }
    cout<<count;
}
void minMax(vector<int>& x){
    int mx = INT_MIN, mn = INT_MAX;
    for(int i=0; i<x.size(); i++){
        mx = max(mx, x[i]);
        mn = min(mn, x[i]);
    }
    swapRequired(mx, mn, x);

}
int main(){
    int vets;
    cin >> vets;
    vector<int> t(vets);
    for(int i=0; i<vets; i++){
        cin >> t[i];
    }
    minMax(t);
}