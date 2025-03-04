#include<bits/stdc++.h>
using namespace std;
void fibSeries(int x){
    vector<int> fib;
    fib.emplace_back(0);
    fib.emplace_back(1);
    for(int i=2; i>0; i++){
        fib.emplace_back(fib[i-1] + fib[i-2]);
        if(fib[i]==x){
            break;
        }
    }
    cout<<0<<" "<<fib[fib.size()-3]<<" "<<fib[fib.size()-2];
}
int main(){
    int num;
    cin >> num;
    if(num>0){
    fibSeries(num);
    }
    else {
        cout<<0<<" "<<0<<" "<<0;
    }
}