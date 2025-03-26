#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int s=0; s<t; s++){
        int x, k;
        
        vector<int> moves;
        cin >> x >> k;
        int y = x;
        for(int i=x; x>0; i--){
            if(i%k!=0){
                for(int j=0; j<x/i; j++){
                    moves.push_back(i);
                }
                x=x%i;
            }
        }
        cout<<moves.size()<<"\n";
        for(int i=0; i<moves.size(); i++){
            cout<<moves[i]<<" ";
        }
        cout<<"\n";
    }
}