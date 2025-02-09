#include<bits/stdc++.h>
using namespace std;
void divCalc(long long& y, long long& x){
        if(y%x==0){
            cout<<0<<"\n";
        }
        else {
                cout<<x - (y % x)<<"\n";    
           }
        
}
int main(){
    int cases;
    long long a, b;
    cin >> cases;
    for(int i=0; i<cases; i++){
        cin >> a >> b;
        divCalc(a, b);
    }
}