#include<bits/stdc++.h>
using namespace std;
int toastsProduction(int x, int y, int z, int a, int b, int c){
    int d = (min({y/b, z, a/c}))/x;
    return d;
}
int main(){
    int friends, bottles, liters, limes, slices, salt, drinkreq, slicereq=1, saltreq;
    cin >> friends >> bottles >> liters >> limes >> slices >> salt >> drinkreq >> saltreq;
    int total_liters = bottles*liters;
    int total_slimes = limes*slices;
    cout<<toastsProduction(friends, total_liters, total_slimes, salt, drinkreq, saltreq);
}