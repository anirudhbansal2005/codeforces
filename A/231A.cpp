#include<bits/stdc++.h>
using namespace std; 
int main(){
    int prob;
    cin >> prob;
    int arr[3];
    int count;
    int total= 0;
    for ( int j = 0; j < prob; j++) {
        for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        }
        for (int k = 0; k < 3; k++) {
            if(arr[k]==1){
                count++;
            }
        }
        if (count>=2){
            total++;
            count = 0; 
        }  
        else {
            count = 0;
        }
    }
    cout<<total;
}