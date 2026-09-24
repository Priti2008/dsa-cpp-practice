// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int k;
//     cin >> k;

//     unordered_map<int, int> freq;


//     for (int i = 0; i < k; i++) {
//         freq[a[i]]++;
//     }

//     cout << freq.size() << endl;


//     for (int i = k; i < n; i++) {

       
//         freq[a[i - k]]--;

//         if (freq[a[i - k]] == 0) {
//             freq.erase(a[i - k]);
//         }


//         freq[a[i]]++;

//         cout << freq.size() << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	for(int i=0;i<=n-k;i++){
		unordered_set<int> s;
		for(int j=i;j<i+k;j++){
			s.insert(arr[j]);
		}
		cout<<s.size()<<endl;
	}
}



















