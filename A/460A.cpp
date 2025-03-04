#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int count = 0;
    for(int i=1; n!=0; i++){
        n--;
        if(i%m==0){
            n++;
        }
        count++;
    }
    cout<<count;
}