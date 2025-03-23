#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
void evenNum(int x){
    if(isPrime(x/2)){
        cout<<(x/2)+1<<" "<<(x/2)-1;
    }
    else {
    cout<<x/2<< " "<< x/2;
    }
}
void OddNum(int x){
    cout<<x-9<<" "<<9;
}
int main(){
    int num;
    cin >> num;
    if(num%2==0){
       evenNum(num);
    }
    else {
        OddNum(num);
    }
}