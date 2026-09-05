#include <vector>

using namespace std;

class Solution {
public:
    int countZeros(vector<vector<int>>& mat) {
        int n = mat.size();

        
        int r = 0;
        int c = n - 1;
        int count = 0;

        while (r < n && c >= 0) {
            if (mat[r][c] == 0) {

                count += (c + 1);
                r++; 
            } else {
                c--; 
            }
        }

        return count;
    }
};