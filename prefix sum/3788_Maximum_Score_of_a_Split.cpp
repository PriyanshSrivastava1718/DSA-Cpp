/* class Solution {
public:
    long long maximumScore(vector<int>& nums) 
    {
        int n = nums.size();
        vector<long long> lp(n);
        lp[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            lp[i] = lp[i - 1] + nums[i];
        }
        vector<int> rp(n);
        rp[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--)
        {
            rp[i] = min(nums[i], rp[i + 1]);
        }
        long long ans = LLONG_MIN;
        for(int i = 0; i < n - 1; i++)
        {
            long long x = lp[i] - rp[i + 1];
            ans = max(ans, x);
        }
        return ans;
    }
}; */
/* 
Approach:
1. Build a prefix sum array where lp[i] stores the sum of elements from index 0 to i.
2. Build a suffix minimum array where rp[i] stores the minimum element from index i to the end.
3. Iterate through all valid split positions from index 0 to n - 2.
4. Calculate the score for each split as lp[i] - rp[i + 1], using the prefix sum and the minimum element strictly to the right.
5. Track and return the maximum score among all valid splits.

Time Complexity: O(n), where n is the number of elements in the array.
Space Complexity: O(n), for the prefix sum and suffix minimum arrays. 
*/