#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin >> s;
    vector<int> temp(s);
    int even = 0, odd = 0;
    for(int i=0; i<s; i++){
        cin >> temp[i];
        if(temp[i]%2!=0){
            odd +=1;
        }
        else {
            even+=1;
        }
    }
    for(int i=0; i<s; i++){
        if(even<odd){
            if(temp[i]%2==0){
                cout<<i+1;
                break;
            }
        }
        else {
            if(temp[i]%2!=0){
                cout<<i+1;
                break;
            }
        }
    }
}