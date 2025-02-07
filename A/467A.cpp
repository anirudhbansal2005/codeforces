#include<bits/stdc++.h>
using namespace std;
int main(){
    int room;
    cin >> room;
    int arr[room][2];
    int diff=0;
    int count=0;
    for(int i=0; i<room; i++){
        for(int j=0; j<2; j++){
            cin >> arr[i][j];
            
        }
        diff-=arr[i][0];
        diff+=arr[i][1];
        if(diff>1){
            count++;
            
        }
        diff=0;
    }
    cout<<count;
}