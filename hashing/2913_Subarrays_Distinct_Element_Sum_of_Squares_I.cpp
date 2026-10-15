/* class Solution {
public:
    int sumCounts(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            unordered_set<int> arr;
            for(int j = i; j < n; j++)
            {
                arr.insert(nums[j]);
                int distinct = arr.size();
                ans += distinct * distinct;
            }
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Initialize ans = 0 to store the sum of squared distinct element counts.
    2. Iterate through each index i as the starting point of a subarray.
    3. Create an unordered_set to maintain distinct elements for the current subarrays.
    4. Iterate through each index j from i to the end of the array.
    5. Insert nums[j] into the set to maintain unique elements in the subarray nums[i...j].
    6. Calculate the number of distinct elements using arr.size() and add its square to ans.
    7. Return ans after processing all subarrays.

    Time Complexity: O(n^2) average
    Space Complexity: O(n)

    Where n is the size of the input array.
*/