#include<bits/stdc++.h>
using namespace std;
void dragonSuffered(long long& x, long long& z, unordered_set<long long>& a){
    for(long long i=x; i<=z;i+=x){
        a.insert(i);
    }
}

int main(){
    vector<long long> x;
    long long d;
    for(int i=0; i<4; i++){
        cin >> d; 
        x.push_back(d);
    }
    cin >> d;
    unordered_set<long long> b;
    for(int i=0; i<4; i++){
        dragonSuffered(x[i], d, b);
    }
    cout<<b.size();
}