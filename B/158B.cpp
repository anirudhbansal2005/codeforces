#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin >> s;
    int sum = 0, temp, odd = 0;
    for(int i=0; i<s; i++){
        cin >> temp;
        sum+=temp;
        if(temp==3){
            odd++;
        }
    }
    if(sum%4!=0){
        cout<<(sum/4)+1;
    }
    else if(odd>=s-1 && s>2){
        cout<<s;
    }
    else {
        cout<<sum/4;
    }
}