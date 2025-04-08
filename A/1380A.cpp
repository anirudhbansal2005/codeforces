// #include<bits/stdc++.h>
// using namespace std;
// vector<int> indexGreaterLesser(vector<int>& x){
//     vector<int> index;
//     for(int i=0; i<x.size(); i++){
//         for(int j=i+1; j<x.size(); j++){
//             if(x[i]<x[j]){
//                 for(int k=j; k<x.size(); k++){
//                     if(x[j]>x[k]){
//                         index.push_back(i+1);
//                         index.push_back(j+1);
//                         index.push_back(k+1);
//                         return index;
//                     }
//                 }
//             }
//         }
//     }
//     return index;
// }
// int main(){
//     int t;
//     cin >> t; 
//     for(int i=0; i<t; i++){
//         int n;
//         cin >> n;
//         vector<int> num(n), index;
//         for(int j=0; j<n; j++){
//             cin >> num[j];
//         }
//         index = indexGreaterLesser(num);
//         if(index.size()!=0){
//             cout<<"YES\n"<<index[0]<<" "<<index[1]<<" "<<index[2]<<"\n";
//         }
//         else {
//             cout<<"NO\n";
//         }
        
//     }
// }


#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
        
        bool found = true;
        // Only need to check indices 1 to n-2 (0-indexed)
        for (int j = 1; j < n - 1; j++){
            if(p[j] > p[j-1] && p[j] > p[j+1]){
                // We found a local maximum, so the triple (j-1, j, j+1) is valid.
                cout << "YES\n" << j << " " << j+1 << " " << j+2 << "\n";  // 1-indexing: add 1 to each index
                found = false;
                break;
            }
        }
        if(found)
            cout << "NO\n";
    }
    
    return 0;
}
