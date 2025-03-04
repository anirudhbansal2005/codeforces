#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    cin >> num;
    int s = num.size();
    string sub = "144";
    num.erase(find(num.begin(), num.end(), "144"), find(num.begin(), num.end(), "144")+3);
    cout<<num;
}