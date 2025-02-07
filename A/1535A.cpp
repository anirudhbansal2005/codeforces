#include<bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    int arr[cases][4];
    int mx1, mx2, mx3;
    for(int i=0; i<cases; i++){
        for(int j=0; j<cases; j++){
            for(int k=0; k<4; k++){
                cin >> arr[j][k];
            }
        }
        for(int j=0; j<cases; j++){
            for(int k=0; k<2; k+=2){
                mx1=max(arr[j][k], arr[j][k+1]);
            }
        }
    }

}