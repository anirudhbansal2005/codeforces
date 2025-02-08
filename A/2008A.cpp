#include<bits/stdc++.h>
using namespace std;
bool checkEvenOdd(const int& x, const int& y){
    return (x%2==0 && y%2==0) || ((x%2==0 && x > 1) && y%2!=0); 
}

int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int x, y;
        cin >> x >> y;
        if(checkEvenOdd(x,y)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}