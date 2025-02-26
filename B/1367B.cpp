#include<bits/stdc++.h>
using namespace std;
void parityCheck(int b){
    int odd = 0, even = 0, temp;
    for(int i=0; i<b; i++){
        cin >> temp;
        if(i%2==0 && temp%2!=0){
            even++;
        }
        if(i%2!=0 && temp%2==0){
            odd++;
        }
    }
    if(odd==even){
        cout<<even<<"\n";
    }
    else {
        cout<<"-1\n";
    }
}

int main(){
    int t = 0;
    cin >> t;
    for(int i=0; i<t; i++){
        int l;
        cin >> l;
        parityCheck(l);
    }
}