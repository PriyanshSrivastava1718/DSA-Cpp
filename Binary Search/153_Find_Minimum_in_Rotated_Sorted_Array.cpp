/* class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n = nums.size();
        int s = 0, e = n-1;
        int m;
        int pivot = INT_MIN;
        while(s<=e)
        {
            m = s + (e-s)/2;
            if(s==e)
            {
                pivot = s;
                break;
            }
            if(nums[m]>nums[m+1])
            {
                pivot = m;
                break;
            }
            else if(nums[m]<nums[s])
            {
                e = m-1;
            }
            else
                s = m+1;
        }
        if(pivot == n-1)
            return nums[0];
        else
            return nums[pivot+1];
    }
}; */
/*
Approach:
1. Use binary search to find the pivot (largest element) in the rotated array.
2. If nums[mid] > nums[mid + 1], mid is the pivot.
3. If nums[mid] < nums[start], the pivot lies on the left side.
4. Otherwise, the pivot lies on the right side.
5. If the pivot is the last element, the array is not rotated,
   so nums[0] is the minimum.
6. Otherwise, the element immediately after the pivot is the minimum.

Time Complexity: O(log n)
Space Complexity: O(1)
*/