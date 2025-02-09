#include<bits/stdc++.h>
using namespace std;
void swapGB(int x, string& m){
     char temp = m[x];
     m[x] = m[x+1];
     m[x+1] = temp;
}
void canteenQueue(const int& x, const int& y, string& z){
    for(int i=0; i<y; i++){
        string k = z;
        for(int j=0; j<x-1; j++){
            if(k[j]=='B' && k[j+1]=='G'){
               swapGB(j, z);
            }
        }
    }
    cout<<z;

}
int main(){
    int q, t;
    string str;
    cin>> q >> t >> str;
    canteenQueue(q, t, str);
}