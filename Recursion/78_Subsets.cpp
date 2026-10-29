/* class Solution 
{
private:
    void subs(vector<int>& nums,vector<vector<int>>& result,vector<int>& ans,int i)
    {
        if(i>=nums.size())
        {
            result.push_back(ans);
            return;
        }

        //exclude
        subs(nums,result,ans,i+1);

        //include
        ans.push_back(nums[i]);
        subs(nums,result,ans,i+1);
        ans.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> result;
        vector<int> ans;
        int i= 0;
        subs(nums,result,ans,i);
        return result;
    }
}; */
/*
LeetCode 78: Subsets

Approach: Recursion (Pick / Not Pick)

1. For every element, explore two choices:

   * Exclude the current element.
   * Include the current element.
2. When the index reaches nums.size(), add the current subset
   to the result.
3. After exploring the include branch, use pop_back() to undo
   the last choice before returning to the previous recursive call.

Time Complexity: O(2^n * n)
Space Complexity: O(n) auxiliary recursion space,
excluding the output.
*/
