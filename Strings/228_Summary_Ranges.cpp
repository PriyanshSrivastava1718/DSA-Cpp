/* class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) 
        {
            int start = nums[i];
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) 
            {
                i++;
            }
            if (start == nums[i]) 
            {
                ans.push_back(to_string(start));
            } else 
            {
                ans.push_back(to_string(start) + "->" + to_string(nums[i]));
            }
        }
        return ans;
    }
}; */

/*
LeetCode 228 - Summary Ranges

Approach:
1. Traverse the array using a single pointer i.
2. Store the current element as the starting point.
3. Move i forward while consecutive elements are found.
4. If start == nums[i], store it as a single number.
5. Otherwise, store the range as start->nums[i].
6. Continue until all elements are processed.

Time Complexity: O(N)
Space Complexity: O(1) auxiliary space (excluding output).

Concepts Used:
- Arrays
- Two-pointer traversal
- Consecutive sequence detection
- String manipulation
*/
