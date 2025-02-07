#include<bits/stdc++.h>
using namespace std;
bool checkArr(const int& x){
    return ((x/2)%2)==0;
}

void constArr(const int& x){
    vector<int> arr(x);
    int even = 0;
    int odd = -1;
    int sum1 = 0, sum2 = 0;
    for(int i=0; i<(x/2); i++){
        even +=2;
        arr[i] = even;
        sum1 += even;
    }
    for(int i=(x/2); i<x-1; i++){
        odd += 2;
        arr[i] = odd;
        sum2 += odd;
        
    }
    arr[x-1] = sum1-sum2;
    for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int cases;
    cin >> cases;
    int x;
    for(int i=0; i<cases; i++){
        cin >> x;
        if(checkArr(x)){
            cout<<"YES\n";
            constArr(x);
            cout<<"\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}