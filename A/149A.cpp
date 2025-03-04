#include<bits/stdc++.h>
using namespace std;
int main(){
    int z;
    cin >> z;
    vector<int> a(12);
    for(int i=0; i<12; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int count = 0, sum=0;
    for(int i=0; sum<z; i++){
        sum+=a[i];
        count++;
    }
    if(sum>12){
        cout<<-1;
    }
    else {
        cout<<count;
    }
}