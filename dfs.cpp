```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(V, 0);
    vector<int> ans;
    stack<int> st;

    st.push(0);

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!vis[node]) {
            vis[node] = 1;
            ans.push_back(node);

            for (int i = adj[node].size() - 1; i >= 0; i--) {
                int it = adj[node][i];

                if (!vis[it]) {
                    st.push(it);
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
```
