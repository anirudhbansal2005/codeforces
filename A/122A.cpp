#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    cin >> num;
    int lucky4 = 4;
    for(int i=0; i<num.size(); i++){
        if(num[i]!='4' || num[i]!='7'){
            for(int i=0; lucky4<stoi(num); i++){
                if(stoi(num)%lucky4==0){
                    return 1;
                }
                lucky4 = (lucky4*10)+4;
            }
            for(int i=0; lucky4<stoi(num); i++){
                if(stoi(num)%lucky4==0){
                    return 1;
                }
                lucky4 = (lucky4*10)+4;
            }
        }
    }
}