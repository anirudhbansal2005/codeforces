#include<bits/stdc++.h>
using namespace std;
string checkSP(const int& x, const int& y, const int& z){
    if(z>y && z>x && y>x){
        return "STAIR";
    }
    else if(y>z && y>x){
        return "PEAK";
    }
    return "NONE";
}

int main(){
    int cases, x, y, z;
    cin >> cases;
    for(int i=0; i<cases; i++){
        cin >> x >> y >> z;
        cout << checkSP(x, y, z)<<"\n";
    }
}
