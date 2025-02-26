#include<bits/stdc++.h>
using namespace std;
void remainder(int x, int y, int z){
    int c = z-y;
    int a = c%x;
    cout<<z-a<<"\n";
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a, b, c;
        cin >> a>> b>> c;
        remainder(a, b, c);
    }
}

