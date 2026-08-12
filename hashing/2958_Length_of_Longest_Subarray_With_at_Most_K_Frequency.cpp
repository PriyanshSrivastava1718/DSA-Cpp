/* class Solution {
public:
    int maxSubarrayLength(std::vector<int>& nums, int k) {
        int rc = 0;
        int l = 0;
        unordered_map<int, int> map;
        for (int r = 0; r < nums.size(); r++) 
        {
            int n = nums[r];
            while (map[n] >= k) 
            {
                map[nums[l]]--;
                l++;
            }
            map[n]++;
            rc = max(r - l + 1, rc);
        }
        
        return rc;
    }
}; */
/*
    Algorithm:
    1. Use a sliding window with two pointers, l and r.
    2. Maintain the frequency of each element inside the current window using
       an unordered_map.
    3. Expand the window by moving r from left to right.
    4. If the frequency of the current element becomes greater than k,
       move l forward and decrease the frequency of elements leaving the window.
    5. Keep track of the maximum valid window length.
    6. Return the maximum length found.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/