/* 
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) 
    {
        int ans = INT_MAX;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(nums[i]==target)
            {
                int x = abs(i-start);
                ans = min(x,ans);
            }
        }
        return ans;
    }
}; 
*/
/*
LeetCode: Minimum Distance to the Target Element

Approach:
1. Initialize ans to INT_MAX.
2. Traverse the entire array.
3. Whenever nums[i] == target, calculate abs(i - start).
4. Update ans with the minimum distance found.
5. If ans remains INT_MAX, return -1; otherwise, return ans.

Time Complexity: O(n)
Space Complexity: O(1)
*/
