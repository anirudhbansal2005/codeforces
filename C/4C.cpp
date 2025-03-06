#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;
    int t;
    cin >> t;
    
    unordered_map<string, int> s;
    string temp;
    
    while (t--) {
        cin >> temp;
        if (s[temp] == 0) {
            cout << "OK\n";
        } else {
            cout << temp + to_string(s[temp]) << "\n";
        }
        s[temp]++;
    }
}
