#include<bits/stdc++.h>
using namespace std;
int main(){
    int point;
    int rem;
    cin>>point;
    while (point!=0){
        if(rem>=5) {
            rem = point%5;
            cout<<rem;
        }
    }
}