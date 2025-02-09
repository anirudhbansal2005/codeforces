#include<bits/stdc++.h>
using namespace std;
void buriesCalc(long long x){
    long long bury_1 = x/3;
    long long bury_2 = x/3;
    if(x%3==1){
        bury_1++;
    }
    else if(x%3==2){
        bury_2++;
    }
    cout<<bury_1<<" "<<bury_2<<"\n";
}
int main(){
    int cases;
    cin >> cases;
    long long total;
    for(int i=0; i<cases; i++){
       cin >> total;
       buriesCalc(total);
    }
}
