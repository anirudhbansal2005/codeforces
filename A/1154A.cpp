#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    vector<int> s(4);
    for(int i=0; i<4; i++){
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    b = s[0]+s[1]-s[3];
    a = s[1]-b;
    c = s[2]-a;
    cout<<a<<" "<<b<<" "<<c;
}