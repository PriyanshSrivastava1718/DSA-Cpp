/* class Solution {
public:
    int minimizeSum(vector<int>& nums) 
    {
        int n = nums.size();
        if(n<=3)
            return 0;
        sort(nums.begin(),nums.end());
        int case1 = nums[n-1] - nums[2];
        int case2 = abs(nums[0] - nums[n-3]);
        int case3 = abs(nums[n-2] - nums[1]);

        return min({case1,case2,case3});

    }
}; */
/*
LeetCode 1509 - Minimum Difference Between Largest and Smallest Value in Three Moves

Approach:
- Sort the array.
- Consider the possible distributions of three modifications
  between the smallest and largest elements.
- Calculate the remaining range for each possibility.
- Return the minimum range.

Time Complexity: O(N log N)
Auxiliary Space: O(1) auxiliary, excluding sorting internals.
*/