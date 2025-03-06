#include<bits/stdc++.h>
using namespace std;
bool isTPrime(long long x){
    if(sqrt(x)*sqrt(x)==x){
        return true;
    }
    return false;
}
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void nextPrime(int x) {
    vector<int> t;
    
    for (int i = 2; i <= x; i++) { // Fix: Properly collecting primes
        if (isPrime(i)) {
            t.push_back(i);
        }
    }
}
int main(){
    long long t;
    cin >> t;
    long long num;
    
    for(long long i=0; i<t; i++){
        cin >> num;
        if(num<4){
            cout<<"NO\n";
        }
        else if(isTPrime(num)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}