#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Finding the position of the tallest soldier (max height)
    int maxIndex = max_element(heights.begin(), heights.end()) - heights.begin();
    // Finding the position of the shortest soldier (min height)
    int minIndex = min_element(heights.rbegin(), heights.rend()) - heights.rbegin();
    minIndex = n - 1 - minIndex;  // Adjusting for reverse iterator indexing

    // Time required = swaps to bring max to front + swaps to bring min to end
    int swaps = maxIndex + (n - 1 - minIndex);

    // If the max comes before min, one extra swap is saved
    if (maxIndex > minIndex) {
        swaps--;
    }

    cout << swaps << endl;
    return 0;
}
