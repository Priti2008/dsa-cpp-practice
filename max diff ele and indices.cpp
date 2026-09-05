#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxValue(vector<int>& arr) {
        int n = arr.size();

        int max1 = INT_MIN, min1 = INT_MAX;
        int max2 = INT_MIN, min2 = INT_MAX;

        for (int i = 0; i < n; i++) {
            
            int val1 = arr[i] + i;
            max1 = max(max1, val1);
            min1 = min(min1, val1);

         
            int val2 = arr[i] - i;
            max2 = max(max2, val2);
            min2 = min(min2, val2);
        }

        return max(max1 - min1, max2 - min2);
    }
};