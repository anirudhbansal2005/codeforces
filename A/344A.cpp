#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int magnet;
    cin >> magnet;
    int group=0;
    int arr[magnet+1];
    for(int i=0; i<magnet;i++){
        cin >> arr[i];
    }
    for(int i=0;i<=magnet-1; i++){
        if(arr[i]==arr[i+1]){
            continue;
        }
        else {
            group++;
        }
    }
    cout<<group;
}