#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    for(int i=0; i<t; i++){
        int n, k, sum = 0, temp;
        cin >> n >> k;
        for(int j=1; j<=k; j++){
            for(int m=1; m<=n; m++){
                cin >> temp;
                if(m==n/2){
                    sum+=temp;
                }
            }
        }
        cout<<sum<<"\n";
    }
}