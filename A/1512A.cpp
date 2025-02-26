#include <bits/stdc++.h>
using namespace std;

int findUniqueIndex(const vector<int>& x) {
    unordered_map<int, int> freq;  // Stores frequency of each number
    unordered_map<int, int> index; // Stores first occurrence index

    // First pass: Count frequencies and store first index
    for (int i = 0; i < x.size(); i++) {
        freq[x[i]]++;  // Count occurrences
        if (index.find(x[i]) == index.end()) {
            index[x[i]] = i + 1; // Store 1-based index
        }
    }

    // Second pass: Find the unique number and return its index
    for (const auto& num : x) {
        if (freq[num] == 1) return index[num];  // Return the first occurrence index of the unique number
    }

    return -1; // This should never be reached based on the problem constraints
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int& num : arr) {
            cin >> num;
        }

        cout << findUniqueIndex(arr) << "\n";
    }

    return 0;
}
