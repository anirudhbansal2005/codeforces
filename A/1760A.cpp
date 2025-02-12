#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> x(3);
    for(int i=0; i<t; i++){
        for(int i=0; i<3; i++){
            cin >> x[i];
        }   
        sort(x.begin(), x.end());
        cout<<x[1]<<"\n";
    }
}