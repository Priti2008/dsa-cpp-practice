#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int max = nums[0];
        int index = 0;

        // Find the largest element and its index
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
                index = i;
            }
        }

        // Check if largest is at least twice every other number
        for (int i = 0; i < nums.size(); i++) {
            if (i != index && max < 2 * nums[i]) {
                return -1;
            }
        }

        return index;
    }
};