/* class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)
            return true;
        int i = 1;
        while(i < n && nums[i] == nums[0])
            i++;
        if(i == n)
            return true;
        if(nums[i] > nums[0])
        {
            for(int i = 0; i < n-1; i++)
            {
                if(nums[i] > nums[i+1])
                    return false;
            }
        }
        else
        {
            for(int i = 0; i < n-1; i++)
            {
                if(nums[i] < nums[i+1])
                    return false;
            }
        }
        return true;
    }
}; */
/*
LeetCode 896: Monotonic Array

Approach: First Unequal Element + Direction Check

1. Handle the single-element array.
2. Skip consecutive equal elements until the first unequal
   element is found.
3. Use the first unequal pair to determine whether the
   array should be increasing or decreasing.
4. Traverse the array and check whether the direction
   remains consistent.
5. If any element violates the chosen direction, return false.
6. If the entire array satisfies the condition, return true.

Time Complexity: O(n)
Space Complexity: O(1)
*/