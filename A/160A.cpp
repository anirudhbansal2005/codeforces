#include<bits/stdc++.h>
using namespace std;
void evenDistribution(int x, vector<int> y){
    int sumForward = 0;
    int z = x-1;
    for(int i=0; i<x; i++){
        sumForward+=y[i];
        int sumBackward = accumulate(y.begin() + i+1 , y.end(), 0);
        if(sumForward > sumBackward){
            cout<<i+1;
            break;
        }
        else {
            sumBackward = 0;
        }
    }
}
int main(){
    int coins;
    cin >> coins;
    vector<int> a(coins);
    if(coins == 1){
        cout<<"1";
        }
    else {
        for (int i = 0; i < coins; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        evenDistribution(coins, a);
    }
}