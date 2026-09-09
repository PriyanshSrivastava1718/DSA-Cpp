/* class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int sum = nums[0];
        int n = nums.size();
        for(int i = 1;i<n;i++)
        {
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
}; */
/*
    Question Type: Array / Prefix Sum

    Approach:
    Modify the input array in-place to store the running sum.

    Start with the first element as the initial sum.
    For each following element, add it to the running sum
    and replace that element with the updated sum.

    This avoids using an additional result array.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/