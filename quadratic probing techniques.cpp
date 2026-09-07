#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	if (n == 0) {
		cout << "Hash Table is empty";
		return 0;
	}
		int table[m];
	for (int i = 0; i < m; i++) {
		table[i] = -1;
	}
	for (int j = 0; j < n; j++) {
		int key;
		cin >> key;
		int h = key % m;
		bool inserted = false;
		for (int i = 0; i < m; i++) {
			int index = (h + i * i) % m;
			if (table[index] == -1) {
			table[index] = key;
			inserted = true;
				break;
			}
		}
		if (!inserted) {
			cout << "Hash table is full. Cannot insert records from key "
			<< key << endl;
			for (int k = j + 1; k < n; k++) {
				cin >> key;
			}
			break;
		}
	}
	for (int i = 0; i < m; i++) {
		cout << "T[" << i << "] -> " << table[i] << endl;
	}
	return 0;
}