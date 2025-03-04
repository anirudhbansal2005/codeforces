#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;

    ll S_min = k * (k + 1) / 2;  // Sum of first k numbers
    ll S_max = k * (2 * n - k + 1) / 2;  // Sum of largest k numbers

    cout << (x >= S_min && x <= S_max ? "YES\n" : "NO\n");
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
