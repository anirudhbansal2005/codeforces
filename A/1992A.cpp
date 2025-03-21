#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> x){
    int temp;
    for(int i=0; i<5; i++){
        if(x[0]<=x[1] && x[0]<=x[2]){
            x[0]++;
        }
        else if(x[1]<=x[0] && x[1]<=x[2]){
                x[1]++;
            }
        else if(x[2]<=x[0] && x[2]<=x[1]){
                x[2]++;
        }
        else {
            if(x[0]==x[1] && x[0]==x[2]){
                x[0]++;
            }
        }
    }
    return x[0]*x[1]*x[2];
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        cout<<maxProduct(a)<<"\n";
    }

}