#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    unordered_map<char, int> values = {{'T', 4}, {'C', 6}, {'O', 8}, {'D', 12}, {'I', 20}};
    
    int sum = 0;
    string s;
    while (t--) {
        cin >> s;
        sum += values[s[0]];
    }
    cout << sum;
}
