#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases, waste;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int resp = 0, len, maxVal = INT_MIN, maxIndex = 0;
        cin >> resp;
        for(int i=0; i<resp; i++){
            cin >> len >> waste;
            if(len<=10 && waste > maxVal){
                maxVal = waste;
                maxIndex = i+1;
            }
        }
        cout<<maxIndex<<"\n";
    }
} 