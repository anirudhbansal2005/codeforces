#include<bits/stdc++.h>
using namespace std;
void dotGame(int x){
    int initialPos = 0;
    for(int i=0; i>=0; i++){
        if(i>x){
            if(i%2!=0){
                cout<<"Sakurako\n";
                break;
            }
            else {
                cout<<"Kosuke\n";
                break;
            }
        }
    }
}
int main(){
    int t;
    cin >> t; 
    for(int i=0; i<t; i++){
        int g;
        cin >> g;
        dotGame(g);
    }
}