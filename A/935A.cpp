#include<bits/stdc++.h>
using namespace std;
int splitEmployees(int x){
    int count = 0;
    for(int i=1; i<=x/2; i++){
        if(x%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    cout<<splitEmployees(n);
}