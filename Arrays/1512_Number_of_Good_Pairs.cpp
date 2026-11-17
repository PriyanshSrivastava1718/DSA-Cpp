/* class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                    ans++;
            }
        }
        return ans;
    }
}; */
/*
LeetCode 1512 - Number of Good Pairs

Approach: Brute Force
1. Traverse the array using two nested loops.
2. Start the inner loop from i + 1 to avoid comparing
   an element with itself or checking duplicate pairs.
3. Compare nums[i] with nums[j].
4. If both elements are equal, increment the answer.
5. Return the total number of good pairs.

Time Complexity: O(N^2)
    - Each possible pair is checked exactly once.

Space Complexity: O(1)
    - Only a constant amount of extra space is used.

Key Concepts:
- Nested Loops
- Array Traversal
- Pair Counting
*/