#include<bits/stdc++.h>
using namespace std;
int movesRequired(int x, int y){
    int count = 0;
    int z = abs(x-y);
    if(z==0){
        return count;
    }
    else {
        for(int i=10; i>0; i--){  
            if(z>=i){
                count+=z/i;
                z=z%i;
                
            }
        }
    }
    return count;
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int a, b;
        cin >> a >> b;
        cout<<movesRequired(a, b)<<"\n";
    }
}