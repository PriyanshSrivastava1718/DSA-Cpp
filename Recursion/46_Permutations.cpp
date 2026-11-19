/* class Solution 
{
private:
    void solve(vector<int>& nums,vector<vector<int>>& ans,int i)
    {
        int n = nums.size();
        if(i>=n)
        {
            ans.push_back(nums);
            return;
        }
        for(int j = i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            solve(nums,ans,i+1);        //recursive call
            swap(nums[i],nums[j]);      //backtrack
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        int i = 0;
        vector<vector<int>> ans;
        solve(nums,ans,i);
        return ans;
    }
}; */

/*
LeetCode 46 - Permutations

Approach: Backtracking using Swapping

1. Fix one position at a time.
2. Use a loop to try every remaining element at that position.
3. Swap the current element with the selected element.
4. Recursively solve for the next position.
5. Undo the swap after returning from recursion.
6. When all positions are fixed, store the permutation.

Time Complexity: O(N * N!)
Auxiliary Space Complexity: O(N)
Output Space Complexity: O(N * N!)

Concepts Used:
- Recursion
- Backtracking
- Swapping
- Recursive tree
- Choose, Explore, Undo
*/
