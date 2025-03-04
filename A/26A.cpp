#include <bits/stdc++.h>
using namespace std;

void almostPrime(vector<int>& x, int y) {
    int count = 0, a = 0;
    
    for (int j = 6; j <= y; j++) {
        count = 0;
        
        for (int i = 0; i < x.size(); i++) { // Fix: Removed `<=` to avoid out-of-bounds access
            if (x[i] * x[i] > j) break; // Stop if prime factor is greater than `j`
            
            if (j % x[i] == 0) {
                count++; // Count this prime factor
            }

            if (count >= 2) break; // Stop early if already 2 distinct factors
        }

        if (count >= 2) a++; // Only count numbers with 2+ distinct prime factors
    }

    cout << a << "\n";
}

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void nextPrime(int x) {
    vector<int> t;
    
    for (int i = 2; i <= x; i++) { // Fix: Properly collecting primes
        if (isPrime(i)) {
            t.push_back(i);
        }
    }
    
    almostPrime(t, x);
}

int main() {
    int n;
    cin >> n;
    nextPrime(n);
}
