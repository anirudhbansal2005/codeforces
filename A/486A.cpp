#include<bits/stdc++.h>
using namespace std;
int main(){
    long long func;
    long long sum=0;
    cin >> func;
    long long j=1;
    long long inp;
    for(int i=0; i<func; i++){
        inp=j;
        j++;
        if((i%2)==0){
            sum-=inp;
        }
        else {
            sum+=inp;
        }
    }
    cout<<(sum);
}