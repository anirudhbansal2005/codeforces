#include<bits/stdc++.h>
using namespace std;
int distinctYear(int& x){
    for(int i=1; i>0; i++){
        string r = to_string(x);
        set<char> y(r.begin(), r.end());
        if(y.size()!=4){
            x++;
        }
        else {
            break;
        }
    }
    return x;
}
int main(){
    int year;
    cin >> year;
    year++;
    cout<<distinctYear(year);
}