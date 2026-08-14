#include <iostream>
using namespace std;

void dfs(char grid[10][10], int n, int m, int i, int j) {
    if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '0')
        return;

    grid[i][j] = '0';

    dfs(grid, n, m, i + 1, j);
    dfs(grid, n, m, i - 1, j);
    dfs(grid, n, m, i, j + 1);
    dfs(grid, n, m, i, j - 1);
}

int main() {
    int n, m;
    cin >> n >> m;

    char grid[10][10];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '1') {
                count++;
                dfs(grid, n, m, i, j);
            }
        }
    }

    cout << count;

    return 0;
}