/* class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 1;
        int maxi = nums[n-1];
        for(int i = n-1;i>=0;i--)
        {
            if(i==0)
                break;
            if(nums[i]==nums[i-1])
                continue;
            else
            {
                count++;
                maxi = nums[i-1];
            }
            if(count==3)
                return maxi;
        }
        return nums[n-1];
    }
}; */
/*
LeetCode 414 - Third Maximum Number

Approach: Sorting + Reverse Traversal

1. Sort the array in ascending order.
2. Initialize count = 1 and maxi with the largest element.
3. Traverse the array backwards from the last index.
4. Compare adjacent elements to skip duplicates.
5. Whenever a distinct element is found:
   - Increment the distinct element count.
   - Update maxi with the current distinct element.
6. If count becomes 3, return maxi.
7. If fewer than three distinct elements exist,
   return the overall maximum element.

Time Complexity: O(N log N)
    - Sorting takes O(N log N).
    - Reverse traversal takes O(N).

Space Complexity: O(1) auxiliary space
    - Excluding internal sorting space.

Key Concepts:
- Sorting
- Reverse Traversal
- Duplicate Handling
- Distinct Maximum Elements
*/