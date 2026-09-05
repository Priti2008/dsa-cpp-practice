#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        
        
        int left = (n - 1) / 2; // Small half ka largest element
        int right = n - 1;       
        
        // Step 3: Alternate positions fill karo
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = sorted_nums[left--];  // Even index -> Small element
            } else {
                nums[i] = sorted_nums[right--]; // Odd index -> Large element
            }
        }
    }
};