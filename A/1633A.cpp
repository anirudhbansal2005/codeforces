#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int num, temp;
        cin >> num;
        
        if(num%7!=0) {
            temp = num%7;
            if(temp>=4){
                num+=(7-temp);
            }
            else {
                num-=(temp);
            }
        }
        if(num%7==0 && num%10==0){
            if(temp>=4){
                num+=7;
            }
            else {
                num-=7;
            }
        }
        if(num<10){
            num+=7;
        }
        if(num%7==0 && num%10!=0){
            cout<<num<<"\n";
        }
    }
}
