#include<bits/stdc++.h>
using namespace std;
int minimumBills(int& x){
    int count = 0;
    count += x / 100; x %= 100;
    count += x / 20;  x %= 20;
    count += x / 10;  x %= 10;
    count += x / 5;   x %= 5;
    count += x; 
    return count;
}
int main(){
    int money;
    cin >> money;
    cout<<minimumBills(money);
}