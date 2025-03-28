#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    for(long long i=0; i<t; i++){
        long long a, b, c, d, temp;
        cin >> a >> b >> c >> d;
        if(b==d && a==c){
            cout<<"0\n";
        }
        else if(b==d && a>=c){
            cout<<abs(a-c)<<"\n";
        }
        else if(b<=d){
            temp=abs(b-d);
            b+=temp;
            a+=temp;
            if(b==d && c<=a){
                cout<<temp+abs(a-c)<<"\n";
            }
            else {
                cout<<"-1\n";
            }
        }
        else {
            cout<<"-1\n";
        }
    }
}