/* class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ravg(n);
        ravg[n-1]=0;
        int count  = 0;
        long long sum = 0;
        for(int i = n-2;i>=0;i--)
        {
            count++;
            sum = sum + nums[i+1];
            ravg[i] = sum/count; 
        }
        count = 0;
        sum = 0;
        int avg;
        int p = INT_MAX;
        int index;
        for(int i = 0 ;i<n;i++)
        {
            count++;
            sum += nums[i];
            avg = sum/count;
            int diff = abs(avg-ravg[i]);
            if(diff<p)
            {
                p = diff;
                index = i;
            }
        }
        return index;
    }
}; */
/*
    Question Type: Array / Prefix Sum / Suffix Sum

    Approach:
    Build a suffix average array to store the average of all
    elements to the right of each index.

    1. Traverse from right to left and calculate the right-side
       average for every index.
    2. Traverse from left to right while maintaining the running
       sum and count of elements on the left, including the current
       element as defined by the problem.
    3. Calculate the absolute difference between the left and right
       averages.
    4. Keep track of the smallest difference and its corresponding
       index.
    5. Return the index with the minimum average difference.

    long long is used for the running sum to prevent integer overflow.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/