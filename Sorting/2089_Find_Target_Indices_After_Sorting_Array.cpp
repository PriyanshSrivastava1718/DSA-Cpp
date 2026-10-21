/* class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i = 0;i<nums.size();i++)
        {
            int x = nums[i];
            if(x==target)
                ans.push_back(i);
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Sort the input array in ascending order.
    2. Initialize an empty vector ans to store the target indices.
    3. Traverse the sorted array from index 0 to n - 1.
    4. If nums[i] == target, add index i to ans.
    5. Return ans containing all indices where the target occurs.

    Time Complexity: O(n log n)
    Space Complexity: O(1) auxiliary space, excluding the output
                      and sorting implementation.

    Where n is the size of the input array.
*/