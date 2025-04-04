// // #include <bits/stdc++.h>
// // using namespace std;
// // int possibleSegments(vector<int>& x, int y){
// //     int count = 0;
// //     for(int j=0; j<x.size(); j++){
// //         int sum = 0; 
// //         for(int i=j; i<x.size(); i++){
// //             sum+=x[i];
// //             if(sum>=y){
// //                 sum = 0;
// //                 count++;
// //                 break;
// //             }
// //         }
// //     }
// //     return count;
// // }
// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);            
// //     int t;
// //     cin >> t;
// //     for(int i=0; i<t; i++){
// //         int n, k, x, temp;
// //         cin >> n >> k >> x;
// //         vector<int> digs;
// //         for(int j=0; j<n; j++){
// //             cin >> temp;
// //             digs.emplace_back(temp);
// //         }
// //         for(int v=1; v<k; v++){
// //             for(int u=0; u<n; u++){
// //                 digs.emplace_back(digs[u]);
// //             }
// //         }
// //         cout<<possibleSegments(digs, x)<<"\n";
// //     }
// // }

// #include <iostream>
// #include <vector>
// using namespace std;

// int possibleSegments(const vector<int>& b, long long x) {
//     int n = b.size();
//     int count = 0;
//     long long sum = 0;
//     int right = 0;
//     // Iterate over each possible starting index (left pointer)
//     for (int left = 0; left < n; left++){
//         while(right < n && sum < x){
//             sum += b[right];
//             right++;
//         }
//         if(sum >= x) {
//             count++;
//         }
//         sum -= b[left];
//     }
//     return count;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while(t--){
//         int n, k;
//         long long x;
//         cin >> n >> k >> x;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         vector<int> b;
//         b.reserve(n * k);
//         for (int q = 0; q < k; q++){
//             for (int r = 0; r < n; r++){
//                 b.push_back(a[r]);
//             }
//         }
//         cout << possibleSegments(b, x) << "\n";
//     }
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int possiblePrefixSegments(const vector<int>& b, long long x) {
//     int n = b.size();
//     vector<long long> P(n + 1, 0);
//     for (int i = 0; i < n; i++) {
//         P[i+1] = P[i] + b[i];
//     }
//     int validCount = 0;
//     for (int l = 0; l < n; l++) {
//         long long target = x + P[l];
//         auto it = std::lower_bound(P.begin() + l + 1, P.end(), target);
//         if (it != P.end()) {
//             validCount++;
//         }
//     }
//     return validCount;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     for(int yy=0; yy<t; yy++){
//         int n, k;
//         long long x;
//         cin >> n >> k >> x;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         vector<int> b;
//         b.reserve(n * k);
//         for (int rep = 0; rep < k; rep++){
//             for (int i = 0; i < n; i++){
//                 b.push_back(a[i]);
//             }
//         }
//         cout << possiblePrefixSegments(b, x) << "\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

long long possibleSegments(const vector<int>& a, int n, int k, long long x) {
    long long count = 0, sum = 0;
    int right = 0;
    
    for (int left = 0; left < n * k; left++) {
        while (right < n * k && sum < x) {
            sum += a[right % n];  
            right++;
        }
        if (sum >= x) count++;
        
        sum -= a[left % n]; 
    }
    
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int yy=0; yy<t; yy++) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int &num : a) cin >> num;

        cout << possibleSegments(a, n, k, x) << "\n";
    }
}
