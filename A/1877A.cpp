#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, sum = 0;
        int temp;
        cin >> n;
        for(int j=1; j<n; j++){
            cin >> temp;
            sum+=temp;
        }
        if(sum<=0){
            cout<<abs(sum)<<"\n";
        }
        else {
            cout<<"-"<<sum<<"\n";
        }
    }
}