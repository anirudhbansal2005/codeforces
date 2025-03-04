#include<bits/stdc++.h>
using namespace std;
void isAP(int x, int y, vector<int> z){
    for(int i=0; i<x; i++){
        if(abs(z[0]-z[1])!=abs(z[1]-z[2])){
           z[y]*=i; 
        }
        else {
            cout<<"YES";
        }
    }
    cout<<"NO";
}
int main(){
    int t, index;
    cin >> t;
    for(int i=0; i<t; i++){
        vector<int> a(3);
        cin >> a[0] >> a[1]>> a[2];
        if(a[0]<a[1] && a[0]<a[2]){
            index = 0;
        }
        else {
            if(a[1]<a[2] && a[1]<a[2]){
                index = 1;
            }
            else {
                index = 2;
            }
        }
        isAP(*max_element(a.begin(), a.end()), index, a);
    }
}