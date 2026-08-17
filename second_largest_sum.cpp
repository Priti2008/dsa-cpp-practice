#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max = a[0];

        // Find largest element
        for (int i = 0; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }

        int smax = INT_MIN;

        // Find second largest distinct element
        for (int i = 0; i < n; i++) {
            if (a[i] > smax && a[i] != max) {
                smax = a[i];
            }
        }

        int sum = max + smax;

        cout << sum << endl;
    }

    return 0;
}