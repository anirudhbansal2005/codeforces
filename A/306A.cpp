#include<bits/stdc++.h>
using namespace std;
void evenCandies(int x, int y){
    for(int i=0; i<y; i++){
            cout<<x/y<<" ";
        }
}
void oddCandies(int x, int y, int z){
    for(int i=0; i<z; i++){
        cout<<x/y<<" ";
    }
}
int main(){
    int candies, friends;
    cin >> candies >> friends;
    if(candies%friends==0){
        evenCandies(candies, friends);
    }
    else {
        int rem = candies%friends;
        oddCandies(candies, friends, friends-rem);
        oddCandies(candies+friends-rem, friends, rem);
        // 12%6 -> 2 2 2 2 2 2
        // 12%8 -> 1 1 1 1 2 2 2 2 
        // 12%9 -> 1 1 1 1 1 1 2 2 2
    }
}