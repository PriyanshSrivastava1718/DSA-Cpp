/* class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while(i >= 0 && j >= 0)
        {
            if(nums1[i] >= nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        while(j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
}; */
/*
LeetCode - 88. Merge Sorted Array

Approach:
1. Initialize three pointers:
   i at the last valid element of nums1,
   j at the last element of nums2,
   k at the last position of nums1.
2. Compare elements from the back of both arrays.
3. Place the larger element at position k.
4. Move the corresponding pointer backwards.
5. Copy remaining elements of nums2 if any remain.
6. Remaining elements of nums1 are already positioned correctly.

Time Complexity: O(m + n)
Auxiliary Space Complexity: O(1)

Concepts: Arrays, Two Pointers, In-place Merging
*/