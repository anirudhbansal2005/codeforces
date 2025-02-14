#include<bits/stdc++.h>
using namespace std;
void sortDistance(vector<int> x){
    int a = x[0];
    partial_sort(x.begin(), x.end(), x.end(), greater<int>());
    for(int i=x.size()-1; i>=0; i--){
        if(x[i]==a){
            cout<<i<<"\n";
            break;
        }
    }
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        vector<int> a(4);
        for(int i=0; i<4; i++){
            cin >> a[i];
        } 
        sortDistance(a);
    }
}