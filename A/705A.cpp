#include<bits/stdc++.h>
using namespace std;
int main(){
    int rep;
    cin >> rep;
    string love = "I love";
    string hate = "I hate";
    for (int i=1; i<=rep; i++){
        if((i%2)!=0){
            cout<<hate;
            if(i<rep){
                cout<<" "<<"that ";
            }
            else {
                cout<<" "<<"it";
            }
        }
        else {
            cout<<love;
            if(i<rep){
                cout<<" "<<"that ";
            }
            else {
                cout<<" "<<"it";
            }
        }
    }
}