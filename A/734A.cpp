#include<bits/stdc++.h>
using namespace std;
int main(){
    int games;
    int anton = 0;
    int danik = 0;
    cin >> games;
    string wins;
    cin >> wins;
    for(int i = 0; i < games; i++){
        if(wins[i]=='A'){
            anton++;
        }
        else if (wins[i]=='D'){
            danik++;
        }
    }
    if(anton==danik){
        cout<<"Friendship";
    }
    else if ( anton > danik){
        cout<<"Anton";
    }
    else {
        cout<<"Danik";
        }
    }
