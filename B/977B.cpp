#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int freq[26][26] = {0};  // 2D array to store frequency of two-grams
    string maxTwoGram;
    int maxCount = 0;

    for (int i = 0; i < n - 1; i++) {
        int first = s[i] - 'A';
        int second = s[i + 1] - 'A';
        
        freq[first][second]++; // Increment frequency of the two-gram

        if (freq[first][second] > maxCount) {
            maxCount = freq[first][second];
            maxTwoGram = s.substr(i, 2);
        }
    }

    cout << maxTwoGram << endl;
}
