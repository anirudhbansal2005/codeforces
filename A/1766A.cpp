#include<bits/stdc++.h>
using namespace std;
bool check(long long x){
    long long zero = 0;
    long long digit = 0;
    while(x){
        if(x%10==0)
            zero++;
        digit++;
        x=x/10;
    }
    return zero == digit - 1;
}
int main(){
    long long t;
    cin >> t;
    vector<long long> precomp = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(long long i=10; i<999999; i+=10){
        if(check(i)==true){
        precomp.push_back(i);
        }
    }
    for(long long i=0; i<t; i++){
        long long num;
        long long count = 0;
        cin >> num;
        if(num<=10){
            cout<<num<<"\n";
        }
        else {
            for(long long i=0; i<precomp.size(); i++){
                if(precomp[i]<=num){
                    count++;
                }
            }
            cout<<count<<"\n";
        }
    }
}