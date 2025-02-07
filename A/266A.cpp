#include<bits/stdc++.h>
using namespace std;
int main(){
    int stones;
    int countr = 0; 
    int countb = 0;
    int countg = 0;
    int total = 0;
    cin >> stones;
    string str;
    cin>>str;
    for(int i = 0; i < stones; i++){
        if(str[i]=='R'){
            countr++;
            if(countr >= 2) {
                total++;
            }
            else {
                countg=0;
                countb=0;
            }
        }
        else if(str[i]=='G'){
            countg++;
            if(countg > 1) {
                total++;
                
            }
            else  {
                countr=0;
                countb=0;
            }
        }
        else if(str[i]=='B'){
            countb++;
            if(countb > 1) {
                total++;
            }  
            else {
                countr=0;
                countg=0;
                }
        }
    }
    cout<<total;
}