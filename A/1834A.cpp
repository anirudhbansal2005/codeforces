#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    fastio;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int k;
        cin >> k;
        int pos=0, neg=0, temp, count=0;
        for(int j=0; j<k; j++){
            cin >> temp;
            if(temp==1){
                pos++;
            }
            else {
                neg++;
            }
        }
        if(neg%2==0 && pos>=neg){
            cout<<0<<"\n";
            continue;
        }
        else {
            while(neg>pos || neg%2!=0){
                    pos++;
                    neg--;
                    count++;
                }
            cout<<count<<"\n";
        }
    }
}