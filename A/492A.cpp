#include<bits/stdc++.h>
using namespace std;
int main(){
    int cubes;
    cin >> cubes;
    int col=0;
    int sum=0;
    int j=1;
    int count = 0;
    for(int i=1; i>0; i++){
        col+=j;
        j++;
        cubes-=col;
        count++;
        if(cubes<0){
            break;
        }
    }
    cout<<count-1;
}