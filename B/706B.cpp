// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// void drinksPurchased(vector<int> x, int z){
//     int count = 0; 
//     for(int i=0; i < x.size(); i++){
//         if(z>=x[i]){
//             count++;
//         }
//     }
//     cout<<count<<"\n";
// }
// int main(){
//     fastio;
//     int shop;
//     cin >> shop;
//     int mx = INT_MIN;
//     vector<int> shops(shop);
//     for(int i=0; i<shop; i++){
//         cin >> shops[i];
//         if(shops[i]>mx){
//             mx = shops[i];
//         }
//     }
//     int days, coins;
//     cin >> days;
//     for(int i=0; i<days; i++){
//         cin >> coins;
//         if(coins>=mx){
//             cout<<shop<<"\n";
//         }
//         else {
//             drinksPurchased(shops, coins);
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void drinksPurchased(const vector<int>& x, int z) {
    // Using binary search for efficiency
    cout << upper_bound(x.begin(), x.end(), z) - x.begin() << "\n";
}

int main() {
    fastio;
    
    int shop;
    cin >> shop;
    vector<int> shops(shop);
    
    for (int i = 0; i < shop; i++) {
        cin >> shops[i];
    }
    
    // Sort for binary search efficiency
    sort(shops.begin(), shops.end());

    int days, coins;
    cin >> days;
    
    while (days--) {
        cin >> coins;
        drinksPurchased(shops, coins);
    }
}
