#include<bits/stdc++.h>
using namespace std;
int main(){
    int parts;
    int pos;
    cin >> parts >> pos;
    int arr[parts];
    int count=0;
    for(int i = 0; i < parts; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < parts; i++) {
        if(arr[i]>=arr[pos-1] && arr[i]>0){
            count++;
        }
    }
    cout<<count;


}