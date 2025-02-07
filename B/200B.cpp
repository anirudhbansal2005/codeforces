#include<bits/stdc++.h>
using namespace std;
int main(){
    int drinks;
    cin >> drinks;
    int fraction;
    float sum=0;
    for(int i=0; i<drinks; i++ ){
        cin >> fraction;
        sum+=fraction;
    }
    cout<<sum/drinks;
}