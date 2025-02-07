#include<bits/stdc++.h>
using namespace std;
int convertHour(int x){
    int minutes = x*60;
    return minutes;
}

int minLeft(int y){
    int k = 1440-y;
    return k;
}

int main(){
    int cases;
    cin >> cases;
    int h, m;
    for(int i=0; i<cases; i++){
        cin >> h >> m;
        h = convertHour(h)+m;
        cout<<minLeft(h)<<"\n";
    }
}