#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n, mn=0, sum=0;
    cin >> m >> n;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        if(a[i]>=0){
            break;
        }
        else {
            sum+=a[i];
        }
    }
    cout<<abs(sum);

}