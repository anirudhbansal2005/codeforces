#include<bits/stdc++.h>
using namespace std;
int main(){
    int cost;
    int money;
    int amount;
    int borrow = 0;
    int extra = 0;
    int sum = 0;
    cin >> cost;
    cin >> money;
    cin >> amount;
    for(int i = 1; i <=amount; i++) {
        sum+=cost*i;
    }
    if (sum>money){
        extra=sum-money;
        cout<<extra;
    }
    else {
        cout<<0;
    }

}