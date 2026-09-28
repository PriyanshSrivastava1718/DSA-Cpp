/* class Solution {
public:
    int smallestEqual(vector<int>& nums) 
    {
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(i%10 == nums[i])
            {
                return i;
            }
        }    
        return -1;
    }
}; */
/*
    Question: Smallest Index With Equal Value — LeetCode 2057

    Approach:
    - Traverse the array from left to right.
    - For each index i, check whether nums[i] equals i % 10.
    - Return the first index satisfying the condition.
    - If no index satisfies it, return -1.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/