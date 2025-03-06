#include<bits/stdc++.h>
using namespace std;
int main(){
    int c, p;
    int count = 0;
    cin >> c >> p;
    int mx = p;
    int mn = p;
    for(int i=0; i<c-1; i++){
        cin >> p;
        if(p>mx){
            mx = p;
            count++;
        }
        else if(p<mn){
            mn = p;
            count++;
        }
    }
    cout<<count;
}