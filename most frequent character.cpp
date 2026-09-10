class Solution {
public:
    char getMaxOccuringChar(string& s) {
        
        int maxCount = 0;
        char ans = 'z';

        for(char ch = 'a'; ch <= 'z'; ch++) {
            
            int count = 0;

            for(int i = 0; i < s.length(); i++) {
                
                if(s[i] == ch) {
                    count++;
                }
                
            }

            if(count > maxCount) {
                maxCount = count;
                ans = ch;
            }
            
        }

        return ans;
    }
};