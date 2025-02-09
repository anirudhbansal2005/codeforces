#include<bits/stdc++.h>
using namespace std;
int stepCal(int& x){
    int count=0;
    for(int i=5; i>0; i--){
        for(int j=1; j>0; j++){
            if(x>=i){
                x=x-i;
                count++;   
            }
            else{
                break;
            }
        }
    }
    return count;
}
int main(){
    int coords;
    cin >> coords;
    cout<<stepCal(coords);
}