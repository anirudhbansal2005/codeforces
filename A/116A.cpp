#include<bits/stdc++.h>
using namespace std;
int main(){
    int stops;
    cin >> stops;
    int arr[stops][2];
    int pass[stops];
    int passenger=0;
    for(int i=0; i<stops; i++){
        for(int j=0; j<2; j++) {
            cin >> arr[i][j];
        }
        passenger-=arr[i][0];
        passenger+=arr[i][1];
        pass[i]=passenger;
    }
    int mx = pass[0];
    for(int k=1; k<(sizeof(pass)/4); k++){
        if(mx<pass[k]){
            mx = pass[k];
        }
        mx = max(mx,pass[k]);
    }
    cout<<mx;
 
}