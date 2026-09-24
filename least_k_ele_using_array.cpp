// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     unordered_map<int, int> freq;

//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         freq[x]++;
//     }

//     int k;
//     cin >> k;

//     vector<int> elements;

//     for (auto p : freq) {
//         elements.push_back(p.first);
//     }

// sort(elements.begin(), elements.end());


//     elements.resize(k);

// reverse(elements.begin(), elements.end());

//     cout << "[";

//     for (int i = 0; i < k; i++) {
//         cout << elements[i];

//         if (i != k - 1)
//             cout << ", ";
//     }

//     cout << "]";

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int> arr(n);
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int k;
// 	cin>>k;
// 	sort(arr.begin(),arr.end());
// 	vector<int > ele;
// 	for(int i=0;i<n;i++){
// 		if(i==0 || arr[i]!=arr[i-1]){
// 			ele.push_back(arr[i]);
// 		}
// 	}
// 	if(k>ele.size())
// 		k=ele.size();
// 	cout<<"[";
// 	for(int i=ele.size()-1;i>=ele.size()-k;i--){
// 		cout<<ele[i];
// 		if(i!=ele.size()-k)
// 		cout<<", ";
// 	}
// 	cout<<"]";
// 	return 0;
// }







#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	sort(arr.begin(),arr.end());
	int unq[n];
	int m=0;
	for(int i=0;i<n;i++){
		if(i==0 || arr[i]!=arr[i-1]){
			unq[m++]=arr[i];
		}
		
	}
	cout<<"[";
	for(int i=k-1;i>=0;i--){
		cout<<unq[i];
		if(i!=0){
			cout<<", ";
		}
	}
	cout<<"]";

}




























