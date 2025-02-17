#include<bits/stdc++.h>
using namespace std;
void buriesRequired(int x, int y, int z){
    cout<<(x*z)-y;
}
int main(){
    int p, q = INT_MIN, sum=0, temp;
    cin >> p;
    for(int i=0; i<p; i++){
        cin >> temp;
        sum+=temp;
        q = max(q, temp);
    }
    buriesRequired(q, sum, p);

}