#include<bits/stdc++.h>
using namespace std;
int main(){
    int levels;
    cin >> levels;
    int temp;
    int j=1;
    int count=0;
    for(int i=1; i>0; i++){
        cin >> temp;
        if(temp==j){
            if(j<levels){
                j++;
                count++;
            }
            else{
                break;
            }
        }
    }
    if(count==levels){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}