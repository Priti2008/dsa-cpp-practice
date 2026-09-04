#include <bits/stdc++.h>
using namespace std;

int maximumFrequency(vector<int> arr, int n) {
    unordered_map<int, int> count;

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int maxFreq = 0;
    int ans = arr[0];

    // Traversing the array preserves first-occurrence priority
    for (int i = 0; i < n; i++) {
        if (count[arr[i]] > maxFreq) {
            maxFreq = count[arr[i]];
            ans = arr[i];
        }
    }

    return ans;
}