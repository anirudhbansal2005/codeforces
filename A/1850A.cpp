#include<bits/stdc++.h>
using namespace std;
bool toMyCritics(int x, int y, int z){
    if(x+y>=10 || y+z>=10 || x+z>=10 ){
        return true;
    }
    return false;
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(toMyCritics(a, b, c)){
            cout<<"YES\n";
        }
        else{
            cout<<"No\n";
        }
    }
}