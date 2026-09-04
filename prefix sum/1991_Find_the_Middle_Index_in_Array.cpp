/* class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> rsum(n);
        rsum[n-1]=0;
        int x = nums[n-1];
        for(int i = n-2;i>=0;i--)
        {
            rsum[i] = x + rsum[i+1];
            x = nums[i];
        }
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            if(sum == rsum[i])
                return i;
            sum += nums[i];
        }
        return -1;
    }
}; */
/*
    Question Type: Array / Prefix Sum / Running Sum

    Approach:
    First calculate the total sum of the entire array.

    For each index, maintain the sum of elements to the left.
    The sum of elements to the right can be calculated using:

    right sum = total sum - left sum - current element

    If the left sum and right sum are equal, the current
    index is the required middle index.

    After checking the current index, add nums[i] to the
    left sum and continue.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/