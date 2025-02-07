#include<bits/stdc++.h>
using namespace std;
void swapBegin(string& x, string& y){
    string temp="";
    temp += x[0];
    x[0] = y[0];
    y[0] = temp[0];
}

int main() {
    int cases;
    cin >> cases;
    string x, y;
    for(int i=0; i<cases; i++){
        cin >> x >> y;
        swapBegin(x, y);
        cout<<x<<" "<<y<<"\n";
    }
}