/* class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        for(int i = 0;i<n;i++)
        {
            if(i+1 == k)
                return nums[i];
        }
        return 0;
    }
}; */
/* 
Approach:
1. Sort the array in ascending order.
2. Reverse the array to arrange elements in descending order.
3. Return the element at index k - 1, which is the kth largest element.

Time Complexity: O(n log n), where n is the number of elements in the array.
Space Complexity: O(log n), due to the auxiliary space used by the sorting algorithm. */