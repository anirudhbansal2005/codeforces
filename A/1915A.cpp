#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    for(int i = 0; i<cases; i++){
        int a, b, c;
        cin >> a >> b>> c;
        if(a==b){
            cout<<c<<"\n";
        }
        else if(b==c){
            cout<<a<<"\n";
        }
        else {
            cout<<b<<"\n";
        }
    }
}
