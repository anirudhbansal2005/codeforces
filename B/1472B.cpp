#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    int candies;
    int count1 = 0;
    int count2 = 0;
    int temp;
    int sum=0;
    for(int i=0; i<cases; i++){
        cin >> candies;
        // 3
        // 1 1 1 N
        // 1 1 2 Y
        // 1 2 2 N
        // 2 2 2 N
        for(int i=0; i<candies; i++){
            cin >> temp;
            sum+=temp;
            if(temp==2){
                count2++;
            }
            else{
                count1++;
            }
        }
        if((candies%2)!=0 && (count1%2)==0 && (count2%2)!=0  && count1>0){
            cout<<"YES\n";
        }
        else if((candies%2)==0 && ((sum%2)==0 || sum==2 )){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
           } 
        sum=0;
        count1=0;
        count2=0;
        
    }
}