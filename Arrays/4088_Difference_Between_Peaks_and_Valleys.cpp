/* class Solution {
public:
    int peakValleyDifference(vector<int>& nums) 
    {
        int n = nums.size();
        int peak=0;
        int vally=0;
        for(int i = 1;i<n-1;i++)
        {
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
                peak+=nums[i];
            if(nums[i] < nums[i - 1]&&nums[i] < nums[i + 1])
                vally+=nums[i];
        }
        return peak-vally;
    }
}; */
/*
Problem: Peak Valley Difference
Platform: LeetCode
Topic: Arrays

Approach:

1. Initialize peak and vally to 0.
2. Traverse the array from index 1 to n - 2.
3. If an element is greater than both its neighbours, add it to peak.
4. If an element is smaller than both its neighbours, add it to vally.
5. Return peak - vally.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
An element is a strict peak if it is greater than both
neighbours, and a strict valley if it is smaller than both.
Only interior elements can be peaks or valleys.
*/
