#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int temp;
    cin >> temp;
    int drags;
    cin >> drags;
    vector<pair<int, int>> game(drags+1);
    game[0].second = temp;
    for(int i=1; i<=drags; i++){
        cin >> game[i].first;
        cin >> game[i].second;
    }
    sort(game.begin()+1, game.end());
    for(int i=0; i<drags; i++){
        game[i+1].second+=game[i].second;
    }
    bool win = 1;
    
    for(int i=0; i<drags; i++){
        if(game[i].second <= game[i+1].first){
            win = 0;
            break;
        }
    }
    if(win){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}