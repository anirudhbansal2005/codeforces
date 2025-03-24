#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    for(int i=0; i<t; i++){
        int k;
        cin >> k;
        vector<int> oo;
        unordered_map<int, int> ser(k);
        for(int i=0; i<k; i++){
            int temp = 0;
            cin >> temp;
            ser[temp]++;
        }
        for(auto i: ser){
            oo.push_back(i.second);
        }
        if((oo[0]==oo[1] || oo.size()==1) && oo.size()<=2){
            cout<<"YES\n";
        }
        else if(k%2!=0 && abs(oo[0]-oo[1]==1) && oo.size()<=2){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}