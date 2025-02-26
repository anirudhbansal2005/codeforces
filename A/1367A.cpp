#include<bits/stdc++.h>
using namespace std;
void orgString(string x){
    int l = x.size();
    string y ="";
    for(int i=0; i<l; i+=2){
        y+=x[i];
    }
    y+=x[l-1];
    cout<<y<<"\n";
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string x;
        cin >> x;
        orgString(x);
    }
}