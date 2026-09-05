class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            
            if (count == 0) {
                candidate = num;
            }

           
                count++;
            } else {
                count--;
            }
        }

        t hoga
        return candidate;
    }
};