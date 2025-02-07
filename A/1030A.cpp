#include<bits/stdc++.h>
using namespace std;
int main(){
    int peep;
    cin >> peep;
    bool diff=1;
    int arr[peep];
    for(int i=0; i<peep;i++){
        cin >> arr[i];
        if (arr[i]==1){
            cout<<"HARD";
            diff = 0;
            break;
        }
    }
    if(diff){
        cout<<"EASY";
    }
    
}