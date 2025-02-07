#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin >> year;
    string yr="";
    bool y=0;
    int length = 0;
    for(int i=year; i>0; i++){
        year++;
        length = to_string(year).size();
        yr = to_string(year);
        for(int j=0; j<length; j++){
            if(yr[0]!=yr[j]){
                y=1;
            }
            else{
                y=0;
            }
        }
    if(y){
        cout<<year;
        break;
    }
    }
}