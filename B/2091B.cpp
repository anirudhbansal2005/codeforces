#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    fastio;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, x, temp, total_teams = 0, sum = INT_MAX;
        cin >> n >> x;
        vector<int> h, g;
        for(int i=0; i<n; i++){
            cin >> temp;
            if(temp>=x){
                h.push_back(temp);
            }
            else {
                g.push_back(temp);
            }
        }
        total_teams += h.size();
        sort(g.rbegin(), g.rend());
        int team_size = 0;
        for (int i = 0; i < n; i++) {
            team_size++;
            if (team_size * g[i] >= x) { 
                total_teams++;
                team_size = 0;
            }
        }
        cout<<total_teams<<"\n";
    }
}