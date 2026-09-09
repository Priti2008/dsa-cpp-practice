#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     vector<int> arr(n);
    for (int& value : arr)
        cin >> value;

    int k;
    cin >> k;

    sort(arr.begin(), arr.end());

    vector<int> elements;

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            elements.push_back(arr[i]);
        }
    }

    if (k > elements.size())
        k = elements.size();

    cout << "[";

    for (int i = elements.size() - 1; i >= elements.size() - k; i--) {
        cout << elements[i];

        if (i != elements.size() - k)
            cout << ", ";
    }

    cout << "]";

    return 0;
    
}