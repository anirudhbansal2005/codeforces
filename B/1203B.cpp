#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll nums, count=0, prod = 1;
    cin >> nums;
    vector<ll> num(nums);
    for(ll i=0; i<nums; i++){
        cin >> num[i];
    }
    for(ll i=0; i<nums; i++){
        if(num[i]>1){
            count+=num[i]-1;
            num[i] = num[i]-num[i]+1;   
        }
        
        else if(num[i]<-1){
            count+=abs(num[i]+1);
            num[i] = num[i]-num[i]-1;
        }
        else if(num[i]==0){
            continue;
        }
        if(num[i]!=0){
            prod*=num[i];
        }
    }
    for(ll i=0; i<nums; i++){
        if(num[i]==0 && prod==-1){
            num[i]-=1;
            count++;
            prod*=num[i];
        }
        else if(num[i]==0 && prod==1){
            num[i]+=1;
            count++;
            prod*=num[i];
        }
    }
    if(prod==1){
        cout<<count;
    }
    else {
        cout<<count+2;
    }
}