#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> m;

    m.insert(make_pair("Priti", 5));
    m.insert(make_pair("Aditi", 6));
    m.insert(make_pair("Priya", 7));

    cout << m.size() << endl;

    return 0;
}