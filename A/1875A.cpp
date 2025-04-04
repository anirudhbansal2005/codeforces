#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    for(long long i=0; i<t; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        long long sum = b;
        long long temp;
        for(long j=0; j<c; j++){
            cin >> temp;
            if(temp>=a){
                sum+=a-1;
            }
            else {
                sum+=temp;
            }
        }
        cout<<sum<<"\n";
    }
}