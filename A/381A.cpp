#include <bits/stdc++.h>
using namespace std;

int main() {
    int cards;
    cin >> cards;
    vector<int> deck(cards);

    for (int i = 0; i < cards; i++) {
        cin >> deck[i];
    }

    int p1 = 0, p2 = 0;
    int left = 0, right = cards - 1;
    bool turn = true;  // True -> Player 1's turn, False -> Player 2's turn

    while (left <= right) {
        int chosen;
        if (deck[left] > deck[right]) {
            chosen = deck[left];
            left++;
        } else {
            chosen = deck[right];
            right--;
        }

        if (turn) {
            p1 += chosen;
        } else {
            p2 += chosen;
        }

        turn = !turn;  // Switch turns
    }

    cout << p1 << " " << p2 << endl;
    return 0;
}
