#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int k;
    cin >> k;

    vector<int> elements;

    for (auto p : freq) {
        elements.push_back(p.first);
    }

sort(elements.begin(), elements.end());


    elements.resize(k);

reverse(elements.begin(), elements.end());

    cout << "[";

    for (int i = 0; i < k; i++) {
        cout << elements[i];

        if (i != k - 1)
            cout << ", ";
    }

    cout << "]";

    return 0;
}