/* class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int n = boxes.size();
        vector<int> ans(n, 0);
        int one = 0;
        int lsum = 0;
        for (int i = 0; i < n; i++) 
        {
            ans[i] += lsum;
            one += boxes[i] - '0';
            lsum += one;
        }
        one = 0;
        int rsum = 0;
        for (int i = n - 1; i >= 0; i--) 
        {
            ans[i] += rsum;
            one += boxes[i] - '0';
            rsum += one;
        }
        return ans;
    }
}; */

/*
LeetCode 1769 - Minimum Number of Operations to Move All Balls to Each Box

Approach 2: Two-Pass Prefix and Suffix Accumulation

1. Traverse from left to right.
2. Maintain 'one' as the number of balls encountered.
3. Maintain 'lsum' as the accumulated movement cost.
4. Add lsum to ans[i] at every index.
5. Repeat the same process from right to left using rsum.
6. Combine both contributions in the answer array.

Time Complexity: O(N)
Space Complexity: O(1) auxiliary space (excluding output).

Concepts Used:
- Strings
- Prefix accumulation
- Suffix accumulation
- Two-pass traversal
- Running counts
*/
