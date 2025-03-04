#include<bits/stdc++.h>
using namespace std;
long long threeAxle(long long x, long long& y){
    while(x%6!=0){
        x++;
    }
    y+=x/6;
    return y;
}
long long twoAxle(long long x, long long& y){
    y += x/4;
    x = x%4;
    y += x/6;
    return y;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        long long num, sum = 0, sum2 = 0;
        cin >> num;
        if((num%4==0 || num%6==0 || num%2==0) && num >3 ){
        cout<<threeAxle(num, sum)<<" "<<twoAxle(num, sum2)<<"\n";
        }
        else {
            cout<<"-1\n";
        }
    }
}