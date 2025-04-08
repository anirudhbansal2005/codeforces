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
    bool found = false;
    if (z[y - 1] == 0) return;
    z[y - 1] = 0;
    for (int i = 0; i < z.size(); i++) {
        if (z[i] == y) {
            z[i] = 0;
            found = true;
            break;
        }
    }
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

        vector<int> cop = h; 

        for (int k = 0; k < n; k++) {
            cin >> temp;
            removeElement(cop, count, temp);
            cout << count << " ";


            
        }
        cout << "\n";
    }
}
