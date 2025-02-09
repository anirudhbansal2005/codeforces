#include<bits/stdc++.h>
using namespace std;
void horseshoeRequired(vector<int>& y){
    set<int> z(y.begin(), y.end());
    cout<<4-z.size();
}
int main(){
    vector<int> x(4);
    for(int i=0; i<4; i++){
        cin >> x[i];
    }
    horseshoeRequired(x);
}
