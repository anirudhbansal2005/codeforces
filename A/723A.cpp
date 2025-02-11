#include<bits/stdc++.h>
using namespace std;
void distanceRequired(vector<int> a){
    float sum = 0;
    sum+=abs(a[1]-a[2]);
    sum+=abs(a[1]-a[0]);
    cout<<sum;
}
int main(){
    vector<int> a(3);
    for(int i=0; i<3; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    distanceRequired(a);
}