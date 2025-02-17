#include<bits/stdc++.h>
using namespace std;
void gameSubAdd(int x){
    if((x+1)%3==0 || (x-1)%3==0){
        cout<<"First\n";
    }
    else {
        cout<<"Second\n";
    }
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int v;
        cin >> v;
        gameSubAdd(v);
    }
}