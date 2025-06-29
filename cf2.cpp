#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007

// Function to count inversions in an array (O(n^2))
int countInversions(vector<int>& arr) {
    int n = arr.size(), invCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) invCount++;
        }
    }
    return invCount;
}

// Function to find the best subarray [l, r] to minimize inversions
pair<int, int> findBestSubarray(vector<int>& arr) {
    int n = arr.size();
    
    // Initial inversion count
    int minInversions = countInversions(arr);
    pair<int, int> best = {1, 1}; // Default (no change)

    // Try all subarrays [l, r]
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            // Simulate the left cyclic shift on [l, r]
            vector<int> newArr = arr;
            int temp = newArr[l];
            for (int i = l; i < r; i++) newArr[i] = newArr[i + 1];
            newArr[r] = temp;

            // Count inversions in the new array
            int newInversions = countInversions(newArr);

            // Update best answer
            if (newInversions < minInversions) {
                minInversions = newInversions;
                best = {l + 1, r + 1}; // Convert 0-based to 1-based indexing
            }
        }
    }
    return best;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        pair<int, int> result = findBestSubarray(a);
        cout << result.first << " " << result.second << "\n";
    }

    return 0;
}
