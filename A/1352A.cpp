#include<bits/stdc++.h>
using namespace std;
void roundSumrands(int x, int y){
    int div = 10;
    int c;
    vector<int> u;
    for(int i=0; i<y; i++){
        c = x%div;
        x = (x/div)*div;
        div = div*10;
        if(c!=0){
            u.emplace_back(c);
        }    
    }
    cout<<u.size()<<"\n";
    for(int i=0; i<u.size(); i++){
        cout<<u[i]<<" ";
    }
    cout<<"\n";
}
int numberLength(int x){
    int i;
    for(i=1; x!=0; i++){
            x=x/10;
        }
    return i;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int num;
        cin >> num;
        roundSumrands(num, numberLength(num));
    }
}