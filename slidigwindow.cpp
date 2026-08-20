#include <iostream>
#include <algorithm>
using namespace std;

int countSetBits(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }

        n = n / 2;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stable_sort(arr, arr + n, [](int a, int b) {
        return countSetBits(a) > countSetBits(b);
    });

    cout << "[";

    for (int i = 0; i < n; i++) {
        cout << arr[i];

        if (i != n - 1) {
            cout << ", ";
        }
    }

    cout << "]";

    return 0;
}