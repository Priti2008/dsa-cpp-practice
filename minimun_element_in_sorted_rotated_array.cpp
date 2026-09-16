#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> k;

	k = k % n;


	for (int i = 0; i < n; i++) {
		cout << a[(i + n - k) % n];
		if(i<n-1){
			cout<<" ";
		}
	}

	cout << endl;


	cout << a[0] << endl;

	return 0;
}
