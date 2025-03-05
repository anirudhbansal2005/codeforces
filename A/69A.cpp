#include<bits/stdc++.h>
using namespace std;
int main(){
    int f;
    cin >> f;
    int a, b, c, sumx = 0, sumy = 0, sumz = 0;
    for(int i=0; i<f; i++){
        
            cin >> a >> b >> c;
            sumx+=a;
            sumy+=b;
            sumz+=c;
        
    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
}