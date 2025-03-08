#include<bits/stdc++.h>
using namespace std;
void evenNum(int x){
    int a = x/2;
    int b = x-a;
    cout<<a<< " "<< b;
}
void OddNum(int x){
    int a = (x+1)/2;
    int b = x-a;
    cout<<a<<" "<<b;
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