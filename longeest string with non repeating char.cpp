#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        // Frequency array for ASCII characters (all counts initialized to 0)
        std::vector<int> count(128, 0); 

        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++) {
            
            count[s[right]]++;

            
            while (count[s[right]] > 1) {
                count[s[left]]--; 
                left++;            
            }

            maxLen = std::max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};