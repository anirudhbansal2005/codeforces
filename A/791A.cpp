#include<bits/stdc++.h>
using namespace std;
int main(){
    int limak, bob;
    int year=0;
    cin >> limak;
    cin >> bob;
    for(int i = 0; i >= 0; i++){
        limak*=3;
        bob*=2;
        year++;
        if(limak>bob){
            cout<<year;
            break;
        }
    }
    year = 0;
}