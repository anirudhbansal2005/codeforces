#include <bits/stdc++.h>
using namespace std;

int countAndRemove(string &k) {
    int count = 0;
    string result;
    int n = k.size();

    for (int i = 0; i < n; i++) {
        // Check for "mapie" (priority first)
        if (i + 4 < n && k.substr(i, 5) == "mapie") {
            count++;
            i += 4; // Skip next 4 characters
        }
        // Check for "pie"
        else if (i + 2 < n && k.substr(i, 3) == "pie") {
            count++;
            i += 2;
        }
        // Check for "map"
        else if (i + 2 < n && k.substr(i, 3) == "map") {
            count++;
            i += 2;
        }
        else {
            result += k[i]; // Append non-matching characters
        }
    }
    
    k = result; // Update original string
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s;
        string k;
        cin >> s >> k;
        
        int count = countAndRemove(k);
        cout << count << "\n";
    }
    return 0;
}
