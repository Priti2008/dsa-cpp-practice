#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& position, int m, int distance) {

    int count = 1;
    int lastPosition = position[0];

    for (int i = 1; i < position.size(); i++) {

        if (position[i] - lastPosition >= distance) {
            count++;
            lastPosition = position[i];
        }

        if (count >= m) {
            return true;
        }
    }

    return false;
}

int maxDistance(vector<int>& position, int m) {

    sort(position.begin(), position.end());

    int low = 1;
    int high = position.back() - position.front();

    int answer = 0;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (isPossible(position, m, mid)) {
            answer = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return answer;
}

int main() {

    vector<int> position = {1, 2, 3, 4, 7};

    int m = 3;

    cout << maxDistance(position, m);

    return 0;
}