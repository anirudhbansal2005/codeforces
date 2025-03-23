#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a, b, c, temp;
        cin >> a >> b >> c;
        if(c%2==0){
            temp = c/2;
        }
        else {
            temp = (c/2)+1;
        }
        if(a+temp>(b+(c/2))){
            cout<<"First\n";
        }
        else {
            cout<<"Second\n";
        }
    }
}