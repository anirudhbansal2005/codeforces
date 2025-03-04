#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long t1, t2, t3;
    long long area = m*n;
    long long tile_area = a*a;
    float g = area/tile_area;
    if(n%a!=0 || m%a!=0){
        if(n%a==0 && m%a!=0){
            t1 = n/a;
            t2 = (m/a)+1;
            cout<<t1*t2;
        }
        else if(n%a!=0 && m%a==0){
                t1 = (n/a)+1;
                t2 = m/a;
                cout<<t1*t2; 
        }
        else {
            t1 = (n/a)+1;
            t2 = (m/a)+1;
            cout<<t1*t2;
        }
    }
    else if(area<tile_area){
        cout<<1;
    }
    else {
            cout<<area/tile_area;
        }
    
}