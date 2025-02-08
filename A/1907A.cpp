#include<bits/stdc++.h>
using namespace std;
void moveableRook(string& pos){
    char col = pos[0];
    char row = pos[1];
    for(char  c='a'; c<'i'; c++){
        if(c!=col){
            cout<<c<<row<<"\n";
        }
        
    }
    for(char i='1'; i<'9'; i++){
        if(i!=row){
            cout<<col<<i<<"\n";
        }
    }
}

int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        string x;
        cin >> x;
        moveableRook(x);
    }
}


