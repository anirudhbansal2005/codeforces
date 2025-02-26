#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    long long output = 0;
    cin >> n >> m;
    if(m<=(n+1)/2){
        output = (2*m)-1;
    }
    else {
        output = 2*(m-((n+1)/2));
    }
    cout<<output;
}