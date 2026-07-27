/* class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        if(nums.size()<=1)
            return -1;
        int max1=INT_MIN;
        int max2 = INT_MIN;
        for(int i = 0;i<nums.size();i++)//traversing
        {
            if(nums[i]>max1)        //if element = max
            {
                max2 = max1;        //save last max
                max1 = nums[i];
            }
            else if(nums[i]>max2)      //second largest element
                max2 = nums[i];
            else 
                continue;
        }
        int ans = (max1-1)*(max2-1);    //return i-1*j-1
        return ans;
    }
}; */
/*
Algorithm: Linear Traversal
approach: - Initialize two variables to store the
            largest and second largest elements.
          - Traverse the array from 0 to n-1.
          - If the current element is greater than the
            largest element:
          - Shift the previous largest to second largest.
          - Update the largest element.
          - Otherwise, if it is greater than the
            second largest element:
          - Update the second largest element.
          - Return (max1 - 1) * (max2 - 1).
Time Complexity: O(n)
Space Complexity: O(1)
*/