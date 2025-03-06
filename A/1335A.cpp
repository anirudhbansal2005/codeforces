#include<bits/stdc++.h>
using namespace std;
int equalCandies(int x){
    if(x<3){
        return 0;
    }
    else if(x%2!=0){
        return (x/2);
    }
    else {
        return (x/2)-1;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int num;
        cin >> num;
        cout<<equalCandies(num)<<"\n";
    }
}