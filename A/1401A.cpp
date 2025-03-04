#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int num1, num2;
    for(int i=0; i<t; i++){
        cin >> num1 >> num2;
    
    if(num1%2==0 && num2==0 ){
        cout<<0<<"\n";
    }
    else if(num1==2 && num2==0){
        cout<<0<<"\n";
    }
    else{
        cout<<abs(num2-num1)<<"\n";
    }
}
}