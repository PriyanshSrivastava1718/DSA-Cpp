/* class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
            arr.push_back(nums[i]);
        for(int i=0;i<nums.size();i++)
            arr.push_back(nums[i]);
        return arr;
    }
}; */
/*
Approach:
1. Create an empty vector arr to store the result.
2. Traverse nums once and add all its elements to arr.
3. Traverse nums again and append the same elements to arr.
4. Return arr, which now contains nums concatenated with itself.

Time Complexity: O(n)
Space Complexity: O(n)
*/