// #include <bits/stdc++.h>
// using namespace std;
// void removeElement(vector<int>& x, vector<int>& z, int& count, int y){
//     for(int i=1; i<=x.size(); i++){
//         if(i==y){
//             z[i-1]=0;
//         }
//     }
//     for(int i=0; i<x.size(); i++){
//         if(z[i]==y){
//             count+=2;
//             break;
//         }
//         else {
//             count++;
//             break;
//         }
//     }
// }
// int main(){
//     int t;
//     cin >> t;
//     for(int i=0; i<t; i++){
//         int n, temp, count = 0;
//         cin >> n;
//         vector<int> h(n), cop(n);
//         for(int j=0; j<n; j++){
//             cin >> h[j];
//         }
//         cop = h;
//         for(int k=0; k<n; k++){
//             cin >> temp;
//             removeElement(h, cop, count, temp);
//             cout<<count<<" ";
//         }
//         cout<<"\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void removeElement(vector<int>& z, int& count, int y) {
    bool found = false;  // Track if y exists elsewhere

    // If the element is already zero, don't count it
    if (z[y - 1] == 0) return;

    // Remove the first occurrence
    z[y - 1] = 0;

    // Check for another occurrence and remove it
    for (int i = 0; i < z.size(); i++) {
        if (z[i] == y) {
            z[i] = 0;
            found = true;
            break;
        }
    }

    // Count logic:
    // - If we found another occurrence, add 2
    // - Otherwise, add 1
    count += (found ? 2 : 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, temp, count = 0;
        cin >> n;
        vector<int> h(n);
        for (int j = 0; j < n; j++) {
            cin >> h[j];
        }

        vector<int> cop = h;  // Make a copy to modify

        for (int k = 0; k < n; k++) {
            cin >> temp;
            removeElement(cop, count, temp);

            // Stop counting when the entire array is zero
            cout << count << " ";


            
        }
        cout << "\n";
    }
}
