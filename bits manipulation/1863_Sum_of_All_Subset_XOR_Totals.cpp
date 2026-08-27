/* class Solution {
public:
    int subsetXORSum(vector<int>& nums) 
    {
        int x = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            x = x | nums[i];
        }
        int times = 1 << (nums.size() - 1);
        return x * times;
    }
}; */
/*
    Algorithm:
    1. Find the bitwise OR of all the elements in the array.
    2. In the XOR sum of all subsets, every bit that appears
       in at least one element contributes to the final result.
    3. The OR of all elements gives these contributing bits.
    4. Each bit appears in exactly 2^(n-1) subsets because
       for every subset containing that bit, the remaining
       elements can either be selected or not selected.
    5. Multiply the OR result by 2^(n-1) to get the sum of
       XOR values of all subsets.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/