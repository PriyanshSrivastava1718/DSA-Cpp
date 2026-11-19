/* class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size();
        int i = n - 2;

        while (i >= 0 && nums[i] >= nums[i + 1]) //next smallest number
        {
            i--;
        }
        if (i >= 0) 
        {
            int j = n - 1;
            while (nums[j] <= nums[i]) 
            {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
}; */
/*
LeetCode 31 - Next Permutation

Approach: Greedy + Two Pointers

1. Find the first element from the right that is
   smaller than its next element (pivot).

2. Find the first element greater than the pivot
   from the right side.

3. Swap the pivot with the selected element.

4. Reverse the suffix after the pivot to obtain
   the smallest possible greater permutation.

5. If no pivot exists, reverse the entire array.

Time Complexity: O(N)
Space Complexity: O(1)

Concepts:
- Greedy
- Arrays
- Two Pointers
- In-place Reversal
- Lexicographical Ordering
*/