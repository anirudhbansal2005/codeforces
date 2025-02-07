#include<bits/stdc++.h>
using namespace std;

void gameCounter(const int& x, const int& y, int& m, int& c){
    if(x>y){
        m++;
    }
    else if(y>x){
        c++;
    }
}

int main(){
    int games, x, y, mishka=0, chris=0;
    cin >> games;
    for(int i=0; i<games; i++){
        cin >> x >> y;
        gameCounter(x, y, mishka, chris);
    }
    if(mishka > chris){
        cout<<"Mishka";
    }
    else if(mishka==chris){
        cout<<"Friendship is magic!^^";
    }
    else {
        cout<<"Chris";
    }

}