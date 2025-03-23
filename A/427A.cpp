#include<bits/stdc++.h>
using namespace std;
int main(){
    int d, temp, count=0, untr = 0;
    cin >> d;
    for(int i=0; i<d; i++){
        cin >> temp;
        if(temp>=1){
            count+=temp;
        }
        else {
            if(count>0){
                count--;
            }
            else {
                untr++;
            }
        }
    }
    cout<<untr;
}