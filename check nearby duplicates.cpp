#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    ;
vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        if (mp.find(a[i]) != mp.end()) {
            if (i - mp[a[i]] <= k) {
                cout << "True"<<endl;
                return 0;
            }
        }

        mp[a[i]] = i;
    }

    cout << "False"<<endl;

    return 0;
}