/* class Solution {
public:
    int findSpecialInteger(vector<int>& nums) 
    {
        int count = 1;
        int n = nums.size();
        int x = n/4;
        int i;
        for(i = 1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
            }
            else
            {
                if(count>x)
                    return nums[i-1];
                count = 1;
            }
        }
        return nums[i-1];
    }
}; */
/*
    Algorithm:
    1. Initialize count = 1 and calculate the threshold x = n / 4.
    2. Traverse the sorted array from index 1.
    3. If the current element equals the previous element, increment count.
    4. If the elements differ:
       - Check whether count > x. If true, return the previous element.
       - Otherwise, reset count = 1 for the current element.
    5. After the loop, return the last element, since the problem guarantees
       that an element appearing more than 25% of the array exists.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Where n is the size of the input array.
*/