#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    // If s == rev (palindrome), it can only be made universal if k > 0
    if (s == rev) {
        cout << (k > 0 ? "YES\n" : "NO\n");
        return;
    }

    if (s < rev) { 
        cout << "YES\n"; 
        return;
    }

    int diff_count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != rev[i]) diff_count++;
    }

    // Each swap can fix 2 mismatches (one at i and one at n-i-1)
    if (diff_count / 2 <= k) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
