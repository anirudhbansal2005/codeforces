#include<bits/stdc++.h>
using namespace std;
int main(){
    long long d, mx=-1, temp, count=0, mx_count=0;
    cin >> d;
    for(long long i=0; i<d; i++){
        cin >> temp;
        if(temp>=mx){
            mx = temp;
            count++;
        }
        else {
            mx_count = max(count, mx_count);
            count = 1;
            mx = temp;
        }
    }
    mx_count = max(count, mx_count);
    cout<<mx_count;
}