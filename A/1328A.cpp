#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    int a, b;
    int count=0;
    for(int i=0; i<cases; i++){
        cin >> a >> b;
        for(int j=1; j>0; j++){
            if((a%b)!=0){
                a++;
                count++;
            }
            else {
                cout<<count<<"\n";
                count=0;
                break;
            }
        }
    }
    
}