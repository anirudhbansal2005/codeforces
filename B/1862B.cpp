// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     int n;
//     int temp;
//     cin >> t;
//     for(int i=0; i<t; i++){
//         cin >> n;
//         vector<int> p(n);
//         for(int j=0; j<n; j++){
//             cin >> p[j];
//         }
//         for(int k=1; k<p.size(); k++){
//             if(p[k]<p[k-1]){
//                 p.emplace(p.begin()+k, p[k]);
//             }
//         }
//         cout<<p.size()<<"\n";
//         for(int i=0; i<p.size(); i++){
//             cout<<p[i]<<" ";
//         }
//         cout<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     int n;
//     cin >> t;
//     for(int i=0; i<t; i++){
//         cin >> n;
//         int temp = 0;
//         vector<int> p(n);
//         for(int j=0; j<n; j++){
//             cin >> p[j];
//         }
//         string f="";
//         f+=to_string(p[0]);
//         f+=" ";
//         for(int k=1; k<n; k++){
//             if(p[k]<p[k-1]){
//                 f+=to_string(p[k]);
//                 f+=" ";
//                 temp++;
//             }
//             f+=to_string(p[k]);
//             f+=" ";
//         }
//         cout<<p.size()+temp<<"\n";
//         cout<<f<<"\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> result;
        result.push_back(p[0]); // Always include the first element

        for (int i = 1; i < n; i++) {
            if (p[i] < p[i - 1]) {
                result.push_back(p[i]); // Duplicate before inserting
            }
            result.push_back(p[i]);
        }

        // Output the new size
        cout << result.size() << "\n";
        
        // Print the modified sequence
        for (int num : result) {
            cout << num << " ";
        }
        cout << "\n";
    }
}
