/* class Solution 
{
private:
    void solve(vector<int>& nums,vector<vector<int>>& ans,set<vector<int>>& arr,int i)
    {
        int n = nums.size();
        if(i>=n)
        {
            if(arr.find(nums)!=arr.end())
            {
                return;
            }
            ans.push_back(nums);
            arr.insert(nums);
            return;
        }

        for(int j = i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            solve(nums,ans,arr,i+1);
            swap(nums[i],nums[j]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        set<vector<int>> arr;
        vector<vector<int>> ans;
        int i = 0;
        solve(nums,ans,arr,i);
        return ans;
    }
}; */

/*
LeetCode 47 - Permutations II

Approach: Backtracking with Set

1. Fix one position at a time using swapping.
2. Recursively generate permutations for the remaining positions.
3. Undo every swap after the recursive call.
4. At the base case, check whether the permutation
   already exists in the set.
5. Store only unique permutations in the answer.

Time Complexity: O(N * N! * log U) upper bound
Auxiliary Space: O(U * N) for the set + O(N) recursion stack.
Output Space: O(U * N)

Concepts Used:
- Recursion
- Backtracking
- Swapping
- Set
- Duplicate elimination
*/
