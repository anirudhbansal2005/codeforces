#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int mn = INT_MAX;
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        mn = min(mn, abs(temp));
    }
    cout<<mn; 

}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, countNeg=0, countPos=0;
//     cin >> n;
//     int mn = INT_MAX;
//     int mx = INT_MIN;
//     int temp;
//     for(int i=0; i<n; i++){
//         cin >> temp;
//         if(temp>=0){
//             mn = min(mn, temp);
//             countPos++;
//         }
//         else {
//             mx = max(mx, temp);
//             countNeg++;
//         }
//     }
//     if(countNeg>0 && countPos>0){
//         cout<<min(abs(mx), mn);
//     }
//     else if(countNeg==0){
//        cout<<mn; 
//     }
//     else if(countPos==0){
//         cout<<abs(mx);
//     }
    
// }