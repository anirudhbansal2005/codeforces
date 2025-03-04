#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void freeItems(const vector<ll>& prefix, ll x, ll y) {
    cout << prefix[x] - prefix[x - y] << "\n";  // O(1) query using prefix sum
}

void vecInput(ll x, vector<ll>& y) {
    for (ll i = 0; i < x; i++) {
        cin >> y[i];
    }
}

int main() {
    fastio;
    ll n, k;
    cin >> n >> k;
    
    vector<ll> a(n);
    vecInput(n, a);

    sort(a.begin(), a.end(), greater<ll>());  // Sort in descending order

    // Compute prefix sum
    vector<ll> prefix(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }

    // Handle queries
    for (ll i = 0; i < k; i++) {
        ll x, y;
        cin >> x >> y;
        freeItems(prefix, x, y);  // Query in O(1)
    }
}
