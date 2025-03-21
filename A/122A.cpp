#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> lucky = {4, 44, 444, 7, 77, 777, 47, 74, 474, 477, 747, 774, 447, 744};
    int temp;
    bool flag = 1;
    cin >> temp;
    for(int i=0; i<lucky.size(); i++){
        if(temp==lucky[i]){
            cout<<"YES\n";
            flag = 0;
            break;
        }
        if(temp%lucky[i]==0){
            cout<<"YES\n";
            flag = 0;
            break;
        }
    }
    if(flag){
        cout<<"NO";
    }

}