#include<bits/stdc++.h>
using namespace std;
int twoSix(int& x){
    int count=0;
    while(x!=1){
        if(x%2==0 && x%3==0){
            x=x/6;
            count++;
        }
        else if((x*2)%3==0 && (x*2)%2==0){
            x=x*2;
            count++;
        }
        else {
            break;
        }
    }
    return count;
}
int main(){
    int t, num;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> num;
        int c = twoSix(num);
        if(num==1){
            cout<<c<<"\n";
        }
        else {
            cout<<-1<<"\n";
        }

    }
}