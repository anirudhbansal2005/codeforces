#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        vector<int> f = {-1, 1, -1, 1}, g = {-1, -1, 1, 1};
        int count = 0;
        pair<long, long> horse, king_coords, queen_coords;
        cin >> horse.first >> horse.second >> king_coords.first >> king_coords.second >> queen_coords.first >> queen_coords.second;
        set<pair<int, int>> king, queen;
        for(int j=0; j<4; j++){
            king.insert({king_coords.first+f[j]*horse.first, king_coords.second+(g[j]*horse.second)});
            king.insert({king_coords.first+f[j]*horse.second, king_coords.second+(g[j]*horse.first)});
            queen.insert({queen_coords.first+f[j]*horse.first, queen_coords.second+(g[j]*horse.second)});
            queen.insert({queen_coords.first+f[j]*horse.second, queen_coords.second+(g[j]*horse.first)});
        }
       for(auto k: king){
        if(queen.find(k) != queen.end()){
            count++;
            }
        }
        cout<<count<<"\n";
    }

}