#include <bits/stdc++.h>
using namespace std;
bool is_subset(const map<int, int>& b, const map<int, int>& h) {
    for (auto& [key, value] : h) {
        if (b.at(key) < value) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, temp, count = 0;
        cin >> n;
        map<int, int> h = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
        map<int, int> b;

        for (int j = 0; j < n; j++) {
            cin >> temp;
            b[temp]++;
            bool valid = true;
            for (auto& [key, value] : h) {
                if (b[key] < value) {
                    valid = false;
                    break;
                }
            }
            if (valid && count == 0) {
                count = j + 1;
            }
        }

        cout << (count ? count : 0) << "\n";
    }
}
