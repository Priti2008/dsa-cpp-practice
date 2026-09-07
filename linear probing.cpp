#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int table[m];

    for (int i = 0; i < m; i++) {
        table[i] = -1;
    }

    if (n == 0) {
        cout << "Hash Table is empty" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int key;
        cin >> key;

        int index = key % m;
        bool inserted = false;

        for (int j = 0; j < m; j++) {
            int pos = (index + j) % m;

            if (table[pos] == -1) {
                table[pos] = key;
                inserted = true;
                break;
            }
        }

        if (!inserted) {
            cout << "Hash table is full. Cannot insert records from key "
                 << key << endl;
            break;
        }
    }

    for (int i = 0; i < m; i++) {
        cout << "T[" << i << "] -> " << table[i] << endl;
    }

    return 0;
}