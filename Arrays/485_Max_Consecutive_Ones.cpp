/* class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int max=0;
        int count = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                if(count>max)
                    max = count;
                count = 0;
            }
        }
        if (count > max)
            max = count;
        return max;
    }
}; */
/*
Approach:
1. Traverse the array from left to right.
2. Maintain a count of consecutive 1's.
3. If the current element is 1, increment the count.
4. If the current element is 0, update the maximum count
   if needed and reset the count to 0.
5. After the traversal, compare the last count with the
   maximum count to handle the case where the array ends with 1's.
6. Return the maximum consecutive count.

Time Complexity: O(n)
Space Complexity: O(1)
*/