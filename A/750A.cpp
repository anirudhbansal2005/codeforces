#include<bits/stdc++.h>
using namespace std;
int main(){
    int p, t;
    cin >> p >> t;
    int m = 4*60-t;
    int solved = 0;
    for(int i=1; i<=p; i++){
        if(m>=i*5){
            m-=i*5;
            solved++;
        }
    
    }
    cout<<solved;
}