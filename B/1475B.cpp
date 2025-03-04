#include <bits/stdc++.h>
using namespace std;
void isSum(int x) {
    if (x % 2020 <= x / 2020) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int year;
        cin >> year;
        isSum(year);
    }
}
