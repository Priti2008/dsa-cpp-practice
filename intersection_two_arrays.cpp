#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    cin >> n;
    vector<int> nums1(n);

    for(int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    cin >> m;
    vector<int> nums2(m);

    for(int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < n && j < m) {

        if(nums1[i] == nums2[j]) {

            if(ans.empty() || ans.back() != nums1[i]) {
                ans.push_back(nums1[i]);
            }

            i++;
            j++;
        }
        else if(nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}