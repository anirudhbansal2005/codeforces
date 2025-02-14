#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int a, b;
        cin >> a >> b;
        cout<<min(a, b)<<" "<<max(a, b)<<"\n";
    }
}