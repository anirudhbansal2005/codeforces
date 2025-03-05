#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> sum(4);
    sum[0] = (a+b)*c;
    sum[1] = a*(b+c);
    sum[2] = a*b*c;
    sum[3] = a+b+c;
    cout<<*max_element(sum.begin(), sum.end());
}