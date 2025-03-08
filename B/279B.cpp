#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, sum = 0, count = 0;
    cin >> n >> k;
    vector<int> books(n);
    for(int i=0; i<n; i++){
        cin >> books[i];
    }
    for(int i=0; i<n; i++){
        if(sum+books[i]<=k){
            sum+=books[i];
            count++;
        }
    }
    cout<<count;
}