#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int nextPrime(int x) {
    while (true) {
        x++;
        if (isPrime(x)) return x;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << (nextPrime(a) == b ? "YES" : "NO") << endl;
}
