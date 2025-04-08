#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, temp, gc = 0;
        cin >> n;
        for(int j=1; j<=n; j++){
            cin >> temp;
            gc = gcd(temp-j, gc);
        
        }
        cout<<gc<<"\n";
    }
}