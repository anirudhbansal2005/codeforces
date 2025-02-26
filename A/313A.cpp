#include<bits/stdc++.h>
using namespace std;
int main(){
    long long bal, com, comp2, temp;
    cin >> bal;
    if(bal>=0){
        cout<<bal;
    }
    else {
        com=bal/10;
        temp = bal%10;
        comp2= ((bal/100)*10)+temp;
        if(com>comp2){
            cout<<com;
        }
        else {
            cout<<comp2;
        }
    }
}