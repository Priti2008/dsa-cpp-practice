#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[arr[i]]++;

    }
    int k;
    cin>>k;
    vector<int> elements;

    for (int x : a) {
        bool found = false;

        for (int y : elements) {
            if (y == x) {
                found = true;
                break;
            }
        }

        if (!found)
            elements.push_back(x);
    }

	sort(elements.begin(), elements.end(),[&](int x, int y) {
            return (freq[x] > freq[y]);
        });

    for (int i = 0; i < k; i++) {
        cout << elements[i] << " ";
    }

    return 0;
}

}