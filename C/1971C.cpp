#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(((c<=b && c>=a) || (c>=b && c<=a)) && d>=a && d>=b){
            cout<<"YES\n";
        }
        else if(((c<=b && c>=a) || (c>=b && c<=a)) && d<=a && d<=b){
            cout<<"YES\n";
        }
        else if(((d<=b && d>=a) || (d>=b && d<=a))&& c>=a && c>=b){
            cout<<"YES\n";
        }
        else if(((d<=b && d>=a) || (d>=b && d<=a))&& c<=a && c<=b){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}