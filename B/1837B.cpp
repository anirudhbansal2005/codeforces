#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int countLeft = 0, countRight = 0, mx = INT_MIN;
        for(int j=0; j<n; j++){
            if(s[j]=='<'){
                countLeft++;
                mx = max(mx, countRight);
                countRight = 0;
            }
            else {
                countRight++;
                mx = max(mx, countLeft);
                countLeft = 0;
            }
        }
        cout<<max({countLeft, countRight, mx})+1<<"\n";
    }
}