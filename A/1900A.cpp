#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int s;
        cin >> s;
        string k;
        cin >> k;
        int max_count = 0, count = 0;
        int temp = 0;
        for(int i=0; i<s; i++){
            if(k[i]=='.'){
                max_count++;
                count++;
            }
            else {
                temp = max(temp, max_count);
                max_count=0;
            }
        }
        if(temp>=3 || max_count>=3){
            cout<<2<<"\n";
        }
        else {
            cout<<count<<"\n";
        }
    }
}