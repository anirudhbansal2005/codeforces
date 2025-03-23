#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int l;
        cin >> l;
        vector<int> j(l);
        for(int i=0; i<l; i++){
            cin >> j[i];
        }
        int first = 0;
        int last = l-1;
        while(first<=last){
            cout << j[first] << " ";
            if (first != last) { 
                cout << j[last] << " ";
            }
            first++;
            last--;
        }
        cout<<"\n";
    }
}