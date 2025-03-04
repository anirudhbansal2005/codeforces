#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int mn = min(n,m);
    if(mn%2!=0){
        cout<<"Akshat";
    }
    else {
        cout<< "Malvika";
    }
}