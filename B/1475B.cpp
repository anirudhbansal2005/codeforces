#include<bits/stdc++.h>
using namespace std;
void isSum(int x){
    int temp = x%10;
    int sum = 0;
    for(int i=0; i<temp; i++){
        sum+=2021;
    }
    for(int i=1; i>0; i++){
        if(sum==x){
            cout<<"YES\n";
            break;
        }
        else if(sum<x){
            sum+=2020;
        }
        else {
            cout<<"NO\n";
            break;
        }
    }
    
}
void checkYear(int x){
    if(x<4041){
        cout<<"NO\n"; 
    }
    else {
        isSum(x);
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int year;
        cin >> year;
        checkYear(year);
    }
}