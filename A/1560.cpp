#include <bits/stdc++.h>
using namespace std;

vector<int> generateSequence(int maxK) {
    vector<int> seq;
    for (int i = 1; seq.size() < maxK; i++) {
        if (i % 3 != 0 && i % 10 != 3) {
            seq.push_back(i);
        }
    }
    return seq;
}

int main() {
    int t;
    cin >> t;
    vector<int> sequence = generateSequence(1000);  // Precompute first 1000 valid numbers

    while (t--) {
        int k;
        cin >> k;
        cout << sequence[k - 1] << "\n";  // Output the k-th valid number
    }

    return 0;
}
