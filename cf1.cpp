#include <bits/stdc++.h>

using namespace std;

int min_operations(int n, int k, int p) {
    // Check if k is achievable within the given range
    if (k < -n * p || k > n * p) {
        return -1;
    }

    // Calculate the minimum number of operations required
    return (abs(k) + p - 1) / p; // Equivalent to ceil(abs(k) / p)
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        cout << min_operations(n, k, p) << endl;
    }

    return 0;
}