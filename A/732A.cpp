#include<bits/stdc++.h>
using namespace std;
int main(){
    int p, b;
    cin >> p >> b;
    int total;
    for(int i=1; i<10; i++){
        total = (i*p);
        if((total-b)%10==0){
            cout<<i;
            break;
        }
        else if(total%10==0){
            cout<<i;
            break;
        }
    }
}