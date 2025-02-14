#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int count1 = 0;
    int count2 = 0;
    while(a>0 && b>0){
        a--;
        b--;
        count1++;
    }
    if(a>1){
        count2+=a/2;
    }
    else if(b>1){
        count2+=b/2;
    }
    cout<<count1<<" "<<count2;
}