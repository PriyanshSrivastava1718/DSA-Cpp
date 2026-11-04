/* class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n%2==1)
        {
            int m = nums[n/2];
            int ans = 0;
            for(auto x:nums)
            {
                ans += abs(x-m);
            }
            return ans;
        }
        else
        {
            int z = n/2;
            int n = nums[z];
            int m = nums[z-1];
            int ans1 = 0;
            int ans2 = 0;
            for(auto x: nums)
            {
                ans1 += abs(n-x);
                ans2 += abs(m-x);
            }
            return min(ans1,ans2);
        }
        return 0;
    }
}; */
/*
LeetCode 462 - Minimum Moves to Equal Array Elements II

Approach:
1. Sort the array.
2. If the size is odd, choose the middle element as the median.
3. If the size is even, calculate moves using both middle elements.
4. Return the minimum sum of absolute differences.

The median minimizes the sum of absolute differences.

Time Complexity: O(N log N)
    - Sorting takes O(N log N).
    - Traversing the array takes O(N).

Space Complexity: O(1) auxiliary space
    - Excluding the space used internally by sorting.
*/