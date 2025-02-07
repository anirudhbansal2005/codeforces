#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int height;
    cin >> height;
    int sum=0;
    int hs[num];
    for(int i=0; i<num; i++){
        cin >> hs[i];
        if(hs[i]>height){
            sum+=2;
        }
        else if(hs[i]<=height){
            sum++;
        }
    }
    cout<<sum;

}